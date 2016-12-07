#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct student{
	friend bool operator<(const student&,const student&);
	student(const string &n,const string& i,const int& s):
		name(n),id(i),score(s){}
	string name;
	string id;
	int score;
};
bool operator<(const student&ls,const student&rs){
	return ls.score<rs.score;
}
int main(){
	int n;
	cin>>n;
	int num=n;
	vector<student> svec;
	while(n-->0){
		string name;
		cin>>name;
		string id;
		cin>>id;
		cin.clear();
		int score;
		cin>>score;	
		svec.push_back(student(name,id,score));
	}
	auto max=svec.begin();
	auto min=svec.begin();
	for(auto i=svec.begin();i!=svec.end();++i){
		if(i->score>max->score) max=i;
		if(i->score<min->score) min=i;
	}
	cout<<max->name<<" "<<max->id<<endl;
	cout<<min->name<<" "<<min->id<<endl;
	return 0;
}
