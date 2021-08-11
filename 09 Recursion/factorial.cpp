#include<iostream>
using namespace std;



int fact(int n){
	//base case
	if(n==0){
		return 1;
	}
	//rec case
	int ans = n*fact(n-1);
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<fact(n) <<endl;

}