#include<iostream>
using namespace std;


int main(){

	char sentence[1000];

	char temp = cin.get();

	int len = 0;

	//could have checked our len doesn't exceed the sentence array, additional check 
	while(temp!='\n'){
		sentence[len++] = temp;
		temp = cin.get();
	}
	sentence[len] = '\0';

	cout<<"Length "<<len <<endl;

	cout << sentence <<endl;
}