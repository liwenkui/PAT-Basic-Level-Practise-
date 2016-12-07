#include <iostream>
#include <cmath>
using namespace std;

inline bool IsPrime(const int& e){
	for(int i=3;i<=sqrt(e);i=i+2)
		if(e%i==0)return false;
	return true;
}

int main(){
	int num=0;
	cin>>num;
	int cnt=0;
	for(int i=3;i<=num;){
		if(IsPrime(i)){
			if((i=i+2)<=num&&IsPrime(i))// bigO(n^1.5)
				++cnt;
		}
		else
			i=i+2;
	}		
	cout<<cnt;
	return 0;
}
