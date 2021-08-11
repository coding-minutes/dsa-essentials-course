#include<iostream>
using namespace std;


int main(){

	int x = 10;
	float y = 5.5;

	cout << &x <<endl;

	//cout<< &y <<endl;

	//Demo Pointer

	int *xptr = &x;

	cout << xptr <<endl;

	//Address of a Pointer Variable
	cout << &xptr <<endl;

	//Pointer to a Pointer
	int ** xxptr = &xptr;

	cout << xxptr <<endl;


	return 0;
}