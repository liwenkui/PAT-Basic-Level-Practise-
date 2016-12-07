#include <iostream>
#include <vector>
using namespace std;
int main(){
	int i=0;
	int j=0;
	vector<int> vi;
	while(cin>>i){
		if(cin>>j){
			if(j!=0){
				vi.push_back(i*j);
				vi.push_back(j-1);
			}
		}
	}
	if(vi.empty())
		cout<<"0 0";
	else
		for(auto i=vi.begin();i!=vi.end();++i)
			cout<<*i<<((i!=vi.end()-1)?' ':'\0');
	return 0;
}
