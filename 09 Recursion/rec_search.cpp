#include<iostream>
using namespace std;
	

int firstOcc(int arr[],int n,int key){

	//base case
	if(n==0){
		return -1;
	}
	//rec case
	if(arr[0]==key){
		return 0;
	}
	int subIndex = firstOcc(arr + 1, n - 1, key);
	if(subIndex!=-1){
		return subIndex + 1;
	} 
	return -1;
}

int lastOcc(int arr[],int n,int key){
	//Complete this Code
	//base case
	if(n==0){
		return -1;
	}

	//rec case 
	int subIndex = lastOcc(arr + 1, n - 1, key);
	if(subIndex==-1){
		if(arr[0]==key){
			return 0;
		}
		else{
			return -1;
		}
	}
	else{
		return subIndex + 1;
	}
}


int main(){

	int arr[] = {1,3,5,8,7,6,2,8,7,11,21};
	int n = sizeof(arr)/sizeof(int);
	int key = 7;
	cout <<lastOcc(arr,n,key)<<endl;

	return 0;
}