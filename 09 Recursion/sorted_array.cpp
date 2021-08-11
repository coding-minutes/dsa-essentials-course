#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
	//base case
	if(n==1 or n==0){
		return true;
	}
	//rec case
	if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
		return true;
	}
	return false;
}

bool isSortedTwo(int arr[],int i,int n){
	if(i==n-1){
		return true;
	}
	if(arr[i]<arr[i+1] and isSortedTwo(arr,i+1,n)){
		return true;
	} 

	return false;
}

int main(){

	int arr[] = {1,2,3,5,16,7};
	int n = sizeof(arr)/sizeof(int);

	cout <<isSortedTwo(arr,0,n) <<endl;


	return 0;
}