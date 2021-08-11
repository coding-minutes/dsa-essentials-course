#include<iostream>
using namespace std;
// Given a sentence, count the number of alphabets, digits & spaces in the sentence





int main(){


	//store and then count
	// read one by one and then count 

	char ch;

	ch = cin.get();

	//Count 
	int alpha = 0;
	int space = 0;
	int digit = 0;

	while(ch!='\n'){

		if(ch>='0' and ch<='9'){
			digit++;
		}
		else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
			alpha++;
		}
		else if(ch==' ' or ch=='\t'){
			space++;
		}

		ch = cin.get();
	}

	cout<<"Total Alphabets "<<alpha<<endl;
	cout<<"Total Digits "<<digit<<endl;
	cout<<"Total Space "<<space<<endl;
	
	return 0;

}