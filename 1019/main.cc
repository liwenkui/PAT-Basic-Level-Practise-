#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int Kaprekar(ostream& os,int k){
	vector<int> ivec;
	ivec.push_back(k/1000);
	ivec.push_back(k%1000/100);
	ivec.push_back(k%100/10);
	ivec.push_back(k%10);
	sort(ivec.begin(),ivec.end());	
	int k1=ivec[3]*1000+ivec[2]*100+ivec[1]*10+ivec[0];
	int k2=ivec[0]*1000+ivec[1]*100+ivec[2]*10+ivec[3];
	cout<<k1<<" - ";
	cout.width(4);
	cout.fill('0');
	cout<<k2<<" = ";
	cout.width(4);
	cout.fill('0');
	cout<<k1-k2<<endl;
	return k1-k2;
}
int main(){
	int num;
	cin>>num;
	if(num==6174)
		cout<<"7641 - 1467 = 6174"<<endl;
	while(num!=6174&&num!=0){
		num=Kaprekar(cout,num);
	}
	return 0;
}
