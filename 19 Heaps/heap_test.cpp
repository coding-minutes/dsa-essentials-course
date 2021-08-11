#include<iostream>
#include "heap.h"
using namespace std;


int main(){

	int marks[] = {90,80,12,13,15,56,94};

	Heap h;

	for(int x:marks){
		h.push(x); //logn
	}

	while(!h.empty()){
		cout<< h.top() <<endl;
		h.pop(); //logn
	}


	return 0;
}


