#include<iostream>
using namespace std;


//Product (Shopping Website)
class Product{
private:
	int id;
	char name[100];
	int mrp;
	int selling_price;	
public:
	//Constructor
	Product(){
		cout<<"Inside constructor";
	}
	//Parameterised Constructor
	Product(int id,char *n,int mrp,int selling_price){
		this->id = id;
		this->mrp = mrp;
		this->selling_price = selling_price;
		strcpy(name,n);
	}
	
	Product(Product &X){
		//Create to the copy
		id = X.id;
		strcpy(name,X.name); //Array
		mrp = X.mrp;
		selling_price = X.selling_price;
	}

	//Setters
	void setMrp(int price){
		if(price>0){
			mrp = price;
		}
		
	}
	void setSellingPrice(int price){
		//additional checks
		if(price>mrp){
			selling_price = mrp;
		}
		else{
			selling_price = price;
		}
	}
	//Getters
	int getMrp(){
		return mrp;
	}
	int getSellingPrice(){
		return selling_price;
	}

	void showDetails(){
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Selling Price "<<selling_price<<endl;
		cout<<"MRP : "<<mrp <<endl;

		cout<<"----------" <<endl;
	}


};


int main(){

	Product camera(101,"GoProHero9",28000,26000);
	//camera.showDetails();

	//Copy is made using a special constructor -> Copy Constructor
	Product webcam(camera);

	Product handyCam = camera; //
	handyCam.setMrp(1000);

	camera.showDetails();
	webcam.showDetails();
	handyCam.showDetails();
	// selling_price <= mrp
	//camera.mrp = 100;
	//camera.selling_price = 200;
	//camera.setMrp(100);
	//camera.setSellingPrice(190);

	//cout<< sizeof(camera)<<endl;
	//cout <<"MRP "<< camera.getMrp()<<endl;
	//cout<<"Selling price "<<camera.getSellingPrice() <<endl;



}