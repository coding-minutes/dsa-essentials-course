#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){


	vector<int> arr = {10,11,2,3,4,6,7,8};

	int key;
	cin>>key;s

	vector<int>::iterator it = find(arr.begin(),arr.end(),key);

	if(it!=arr.end()){
		cout <<"Present at index "<< it - arr.begin();
	}
	else{
		cout<<"Element not found"<<endl;
	}


	return 0;
}