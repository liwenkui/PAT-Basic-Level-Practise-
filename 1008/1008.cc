#include <iostream>
#include <list>
using namespace std;
int main(){
	int num;
	cin>>num;
	int m;
	cin>>m;
	int t=num;
	list<int> ls;
	while(t--){
		int in;
		cin>>in;
		ls.push_back(in);
	}
	auto iter=ls.begin();
	t=m;
	while(t--)
		--iter;
	if(m==1){
	for(int i=0;i<num;++i)
		cout<<*iter++<<((i!=num-1)?' ':'\0');
	}else{
		--iter;
		for(int i=0;i<num+1;++i){
			if(i!=(m%num))cout<<*iter<<((i!=num)?' ':'\0');
			iter++;
		}
	}
	return 0;
}

