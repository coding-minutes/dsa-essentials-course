

class Product{
	int id;
	string name;
	int price;
public:
	Product(int id,string name,int price){
		this->id = id;
		this->name = name;
		this->price = price;
	}
	void getPrice(){
		return price;
	}
};

class Item{
	const Product product;
	int qty;	

	Item(const Product product,int qty=1){
		 this->product = product;
		 this->qty = qty;
	}

	int getPrice(){
		return qty*product.getPrice();
	}
};

class Cart{
	//Todo : List of Items

}

const Product allProducts[] = {
	Product(1,"Apple",40);
	Product(1,"Apple",40);
	Product(1,"Apple",40);
	Product(1,"Apple",40);
	Product(1,"Apple",40);

}


int main(){
	//Loop 
	//Prompt : View Cart / Add Item / Checkout
	// if selection == add item
	char option;
	while(true){
		 cout<<"Choose an option? (v)iew item, (a)dd item, (c)heckout";
		 cin>>option;

		 if(option=='a'){
		 	//Todo : Add to Cart

		 }
		 else if(option=='v'){
		 	//view cart 

		 }
		 else{
		 	//option checkout

		 }


	}




}