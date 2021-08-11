#include<iostream>
using namespace std;

//Problem : Print all subarrays of a given array
void printSubarrays(int arr[],int n){

	for(int i=0;i<n;i++){
		for(int j=i; j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k] <<",";
			}
			cout <<endl;
		}

	}

}

// Print the sum of each subarray & find out the largest sum


int main(){
	//Array Containing 
	int arr[] = {-2,3,4,5,-12,6,2,3};
	int n = sizeof(arr)/sizeof(int);

	printSubarrays(arr,n);



	return 0;
}