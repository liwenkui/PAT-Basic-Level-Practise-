#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main(){
	int a1=0,a2=0,c2=0,a3=0,c4=0,a5=-1;
	double a4=0.0;
	int in;
	cin>>in;
	int num=in;
	while(cin>>in){
		switch(in%5){
			case 0:
				if(in%2==0) a1+=in;break;
			case 1:
				++c2;if(c2%2!=0)a2+=in;else a2-=in;break;
			case 2:
				++a3;break;
			case 3:
				a4+=in;++c4;break;
			case 4:
				if(in>a5) a5=in;break;
		}
	}
	if(a1!=0) cout<<a1;else cout<<'N';
	cout<<' ';
	if(c2!=0) cout<<a2;else cout<<'N';
	cout<<' ';
	if(a3!=0) cout<<a3;else cout<<'N';
	cout<<' ';
	if(c4!=0) cout<<fixed<<setprecision(1)<<(a4/c4);else cout<<'N';
	cout<<' ';
	if(a5!=-1) cout<<a5;else cout<<'N';
	return 0;
}

