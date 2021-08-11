#include<vector>
using namespace std;


template<typename T>
class Stack{
	vector<T> arr;
public:
	void push(T data){
		arr.push_back(data);
	}
	void pop(){
		arr.pop_back();
	}
	T top(){
		int lastIdx = arr.size() - 1;
		return arr[lastIdx];
	}
	bool empty(){
		return arr.size()==0;
	}
};	