#include<iostream>
#include<vector>
#include "vector.h"
using namespace std;


int main(){

	Vector<char> vc;
	vc.push_back('a');
	vc.push_back('b');
	vc.push_back('c');

	for(int i=0;i < vc.size();i++){
		cout << vc[i] <<endl;
	}


	Vector<int> v(5);

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(15);
	v.push_back(6);
	v.pop_back();

	cout<< v.front() <<endl;
	cout<< v.back() <<endl;

	cout<< v.at(2) <<endl;

	cout<< v.size() <<endl; //5
	cout<< v.capacity() <<endl; //8

	for(int i=0;i<v.size();i++){
		cout<< v[i] <<",";
	}

}