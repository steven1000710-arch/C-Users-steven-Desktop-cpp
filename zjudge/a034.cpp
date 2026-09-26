#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int a;
	while(cin>>a){
		bool tf=false;
		for(int i=31;i>=0;i--){
			if(a>=pow(2,i)){
				cout<<"1";
				a-=pow(2,i);
				tf=true;
			}
			else if(tf)
				cout<<"0";
		}
		cout<<endl;
	};

	return 0;
}

