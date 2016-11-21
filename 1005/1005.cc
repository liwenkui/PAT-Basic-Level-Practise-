#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> ivec;
	vector<int> cnt(n);
	int nn=n;
	while(nn--){
		int num;
		cin>>num;
		ivec.push_back(num);
	}
	vector<int> res;
	vector<int> cvec;
	for(auto i:ivec){
		int num=i;
		while(num!=1){
			num=(num%2)?(3*num+1)/2:num/2;
			cvec.push_back(num);
		}
	}
    sort(cvec.begin(),cvec.end());
	auto ptr=unique(cvec.begin(),cvec.end());
	cvec.erase(ptr,cvec.end());
	for(auto j:cvec)
		for(auto i=ivec.cbegin();i!=ivec.cend();++i)
			if(j==*i)
			++cnt[i-ivec.cbegin()];
	for(int i=0;i!=n;i++)
		if(cnt[i]==0)
		res.push_back(ivec[i]);
	sort(res.begin(),res.end());
	for(auto i=res.rbegin();i!=res.rend();++i)
	cout<<*i<<((i!=res.rend()-1)?" ":"");
	return 0;
}
		

