#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

inline bool IsPrime(const int& e){
	for(int i=3;i<=sqrt(e);i=i+2)
		if(e%i==0)return false;
	return true;
}
int main(){
	int m,n;
	cin>>m;
	cin>>n;
	int cnt=1;
	vector<int> prime;
	int p;
	while(true){
		if(cnt==1) prime.push_back(2); 	
		
	}
}
