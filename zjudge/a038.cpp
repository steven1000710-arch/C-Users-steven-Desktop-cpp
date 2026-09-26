#include<iostream>
using namespace std;
int main(void){
	
	long long a;
	cin>>a;
	bool tf=false;
	for(int i=10;a!=0;i*=10){
		int n=a%i/(i/10);
		a-=a%i;
		if(n!=0)  tf=true;
		if(tf)  cout<<n;
	}
	if(!tf)cout<<"0";
	
	return 0;
}

