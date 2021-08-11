#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int calcTotalMarks(vector<int> marks){
	return marks[0] + marks[1] + marks[2];
}

bool compare(pair<string,vector<int> > s1, pair<string,vector<int> > s2){
	vector<int> m1 = s1.second;
	vector<int> m2 = s2.second;
	return calcTotalMarks(m1) > calcTotalMarks(m2);
}


int main(){
		vector<pair<string,vector<int> > >  student_marks = {
			{"Rohan", {10,20,11}},
			{"Prateek",{10,21,3}},
			{"Vivek",{4,5,6}},
			{"Rijul",{10,13,20}}
	};

	sort(student_marks.begin(),student_marks.end(),compare);

	for(auto s : student_marks){
		cout<< s.first <<" " <<calcTotalMarks(s.second)<<endl;
	}


	return 0;
}