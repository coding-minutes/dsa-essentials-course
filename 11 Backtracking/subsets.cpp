#include<iostream>
using namespace std;

//------------Function 1
void filter_bits(char arr[],int num){

	//find out all the bits
	int j = 0;
	while(num>0){
		int last_bit = (num&1);
		if(last_bit){
			cout<< arr[j];
		}
		j++;
		num = (num>>1);
	}
	cout <<endl;

}


int main(){
	char arr[] = "abc";

	int n = 3;

	for(int i=0;i<(1<<n); i++){
		filter_bits(arr,i);
	}

	return 0;
}