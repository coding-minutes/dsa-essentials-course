//Product, Item, Cart
#include<string>
#include<unordered_map>
using namespace std;

//Forward Declaration
class Item;
class Cart;

class Product{
	int id;
	string name;
	int price;

public:
	Product(){

	}
	Product(int u_id, string name,int price){
		id = u_id;
		this->name = name;
		this->price = price;
	}
	string getDisplayName(){
		return name + " : Rs " + to_string(price) + "\n";
	}
	string getShortName(){
		return name.substr(0,1);
	}
	friend class Item;
	friend class Cart;
};

class Item{
	Product product;
	int quantity;

public:
	//Constructor using a Init List
	Item(){}
	Item(Product p, int q):product(p), quantity(q){}

	int getItemPrice(){
		return quantity * product.price;
	}
	string getItemInfo(){
		return to_string(quantity) + " x " + product.name + " Rs. " + to_string(quantity * product.price) + "\n";
	}

	friend class Cart;
};	


class Cart{
	unordered_map<int,Item>  items;

public:

	void addProduct(Product product){
		if(items.count(product.id)==0){
			Item newItem(product,1);
			items[product.id] = newItem;
		}
		else{
			items[product.id].quantity += 1;
		}
	}

	int getTotal(){
		//Todo
		int total = 0;
		for(auto itemPair : items){
			auto item = itemPair.second;
			total += item.getItemPrice();
		}
		return total;

	}

	string viewCart(){
		if(items.empty()){
			return "Cart is empty";	
		}

		string itemizedList;
		int cart_total = getTotal();

		for(auto itemPair : items){
			auto item = itemPair.second;
			itemizedList.append(item.getItemInfo());
		}

		return itemizedList + "\n Total Amount : Rs. " + to_string(cart_total) + '\n';
	}
	//later on
	bool isEmpty(){
		return items.empty();
	}

};










