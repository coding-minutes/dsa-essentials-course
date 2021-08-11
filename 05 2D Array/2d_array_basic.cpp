#include<iostream>
using namespace std;

//Passed by Reference
void print(int arr[][100], int n,int m){

	//Print
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main(){

	//constrain
	int arr[1000][100];
	//n rows m columns
	int n,m;
	cin>>n>>m;

	//take input
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>> arr[i][j];
		}
	}
	//print the array
	print(arr,n,m);


	return 0;
}