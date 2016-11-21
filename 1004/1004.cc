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
	sort(svec.begin(),svec.end());
	cout<<svec[num-1].name<<" "<<svec[num-1].id<<endl;
	cout<<svec[0].name<<" "<<svec[0].id<<endl;
	return 0;
}
