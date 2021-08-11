#include<iostream>
#include "list.h"
using namespace std;



int main(){

	List l;
	l.push_front(1);
	l.push_front(0);
	l.push_back(3);
	l.push_back(4);
	l.insert(2,2);
	l.insert(10,0);
	l.pop_front();

	Node* head = l.begin();
	while(head!=NULL){
		cout<< head->getData()<<"->";
		head = head->next;
	}
	int key;
	cin>>key;
	cout << l.recursiveSearch(key) <<endl;
	cout<<endl;


	return 0;
}