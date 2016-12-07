#include <string>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	string str;
	vector<string> vstr;
	while(cin>>str)
		vstr.push_back(str);	
	for(auto i=vstr.rbegin();i!=vstr.rend();++i)
		cout<<*i<<((i!=vstr.rend()-1)?' ':'\0');
	return 0;
}
