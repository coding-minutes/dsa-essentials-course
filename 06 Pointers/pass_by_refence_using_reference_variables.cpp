#include<iostream>
using namespace std;


//Pass by reference using reference variables 
void applyTax(int & money){
	float tax = 0.10;
	money = money - money*tax;
}


int main(){

	int income;
	cin>>income;

	applyTax(income);

	cout << income <<endl;

}