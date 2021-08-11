#include<iostream>
using namespace std;

int count_bits(int n){
	
	int cnt = 0;

	while(n>0){
		int last_bit = (n&1);
		cnt += last_bit;

		n = n>>1;
	}
	return cnt;
}

//Counting Sets Bits : Hack  (Faster method)
int count_bits_hack(int n){

	int ans = 0;
	while(n>0){
		//removes the last set bit from the current number
		n = n & (n-1);
		ans++;
	}

	return ans;

}


int main(){


	int n;
	cin>>n;

	cout<<count_bits(n) <<endl;
	cout<<count_bits_hack(n) <<endl;

	return 0;
}