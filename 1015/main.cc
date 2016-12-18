#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct score{
	score(int i,int k,int l):id(i),s1(k),s2(l){}
	int id;
	int s1;
	int s2;
};

bool operator<(score const& s1,score const& s2){
	int	sum1=s1.s1+s1.s2;
	int sum2=s2.s1+s2.s2;
	if(sum1!=sum2)
		return sum2>sum1;	
	else{
		if(s2.s2!=s1.s2)
			return s2.s2>s1.s2;
		else
			return s2.id<s1.id;
	}
}
int main(){
	int num, s, ps;
	//cin>>num>>s>>ps;
	scanf("%d%d%d",&num,&s,&ps);
	vector<score> sc1;
	vector<score> sc2;
	vector<score> sc3;
	vector<score> sc4;
	while(num--){
		int i,j,k;		
		//cin>>i>>j>>k;
		scanf("%d%d%d",&i,&j,&k);
		if(j>=s&&k>=s){
			if(j>=ps&&k>=ps)
				sc1.push_back(score(i,k,j));
			else if(k<ps&&j>=ps)
				sc2.push_back(score(i,k,j));
			else if(k<ps&&j<ps&&k<j)
				sc3.push_back(score(i,k,j));
			else
				sc4.push_back(score(i,k,j));
		}
	}	
	cout<<sc1.size()+sc2.size()+sc3.size()+sc4.size()<<endl;
	sort(sc1.begin(),sc1.end());
	for(auto i=sc1.crbegin();i!=sc1.crend();++i)
		cout<<i->id<<' '<<i->s2<<' '<<i->s1<<endl;
	sort(sc2.begin(),sc2.end());
	for(auto i=sc2.crbegin();i!=sc2.crend();++i)
		cout<<i->id<<' '<<i->s2<<' '<<i->s1<<endl;
	sort(sc3.begin(),sc3.end());
	for(auto i=sc3.crbegin();i!=sc3.crend();++i)
		cout<<i->id<<' '<<i->s2<<' '<<i->s1<<endl;
	sort(sc4.begin(),sc4.end());
	for(auto i=sc4.crbegin();i!=sc4.crend();++i)
		cout<<i->id<<' '<<i->s2<<' '<<i->s1<<endl;
	return 0;
}
