#include<iostream>
using namespace std;

void dec(int n){
	//base case
	if(n==0){
		return;
	}
	//towards the base case
	cout<<n <<",";
	dec(n-1);
}

void inc(int n){
	//base case
	if(n==0){
		return;
	}
	inc(n-1);
	cout<<n <<",";
}

int main(){

	int n;
	cin>>n;
	dec(n);
	cout<<endl;
	inc(n);

	
	return 0;
}