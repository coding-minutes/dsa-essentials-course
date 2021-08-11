#include<iostream>
using namespace std;



int main(){


	int n;
	cin>>n;

	//Dynamic Array
	int *arr = new int[n];

	cout << arr <<endl;

	for(int i=0;i<n;i++){
		arr[i] = i;
		cout<< arr[i] <<" ";
	}
	cout <<endl;
	//Delete 
	delete [] arr;

	cout << arr <<endl;
	//cout << arr[2] <<endl;

	return 0;

}