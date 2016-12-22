#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
int main(){
	int pair;
	cin>>pair;
	int t=pair;
	map<int,int> mp;	
	while(t--){
		int i,j;
		cin>>i>>j;
		mp[i]=j;
		mp[j]=i;
	}
	int num;
	cin>>num;
	t=num;
	set<int> se;
	while(t--){
		int i;
		cin>>i;
		se.insert(i);
	}
	
	vector<int> res;
	for(auto i=se.cbegin();i!=se.cend();++i){
		auto iter=mp.find(*i);
		if(iter!=mp.end()){
			auto iter2=se.find(iter->second);	
			if(iter2==se.end()){
				res.push_back(iter->first);
			}
		}else
		res.push_back(*i);
	}
	cout<<res.size()<<endl;
	for(auto i=res.begin();i!=res.end();++i){
		cout<<*i<<((i!=--res.end())?' ':'\0');
	}
	return 0;
}

