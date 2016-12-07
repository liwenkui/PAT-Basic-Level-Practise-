#include <iostream>
#include <vector>
using namespace std;
int main(){
	int num;
	cin>>num;
	int t=num;
	vector<bool> lg;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		if((a+b)>c)lg.push_back(true);
		else lg.push_back(false);
	}
	int a=1;
	for(auto b:lg)
		cout<<"Case #"<<a++<<": "<<((b)?"true":"false")<<endl;
	return 0;
}
