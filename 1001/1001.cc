#include <iostream>
using namespace std;
int main(){
	int n;
	int cnt=0;
	cin>>n;
	while(n!=1){
		n=(n%2)?(3*n+1)/2:n/2;
		++cnt;
	}
	cout<<cnt<<endl;
	return 0;
}

