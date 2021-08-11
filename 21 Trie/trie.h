
#include<unordered_map>
#include<string>
using namespace std;

class Trie;

class Node{
	char data;
	unordered_map<char,Node*> m;
	bool isTerminal;

public:

	Node(char d){
		data = d;
		isTerminal = false;
	}

	friend class Trie;
};


class Trie{
	Node*root;
	
public:
	Trie(){
		root = new Node('\0');
	}
	//Insertion
	void insert(string word){
		Node* temp = root;

		for(char ch : word){
			if(temp->m.count(ch)==0){
				Node*n = new Node(ch);
				temp->m[ch] = n;
			}
			temp = temp->m[ch];
		}
		temp->isTerminal = true;
	}
	//Searching

	bool search(string word){

		Node*temp = root;
		for(char ch:word){
			if(temp->m.count(ch)==0){
				return false;
			}
			temp = temp->m[ch];
		}
		return temp->isTerminal;
	}
};






