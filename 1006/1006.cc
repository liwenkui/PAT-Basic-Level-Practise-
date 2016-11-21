#include <iostream>
#include <string>
using namespace std;
int main(){
	int num;
	cin>>num;
	int B=num/100;
	int S=(num-B*100)/10;
	int T=num%10;
	for(int i=0;i<B;i++)
		cout<<'B';
	for(int i=0;i<S;i++)
		cout<<'S';
	for(int i=1;i<=T;i++)
		cout<<i;
	return 0;
}
