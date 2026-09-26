#include<bits/stdc++.h>
#define comp(al) (al[1]!=al[2]&&al[1]==al[3])
using namespace std;
int main(void){
	
	int t;
	cin>>t;
	while(t--){	
		int n=1,a[5],useless;//
		bool is_none=true;
		for(int i=1;i<=7;i++){
			if(i%2==0||i==7){
				cin>>a[n++];
			}
			else{
				cin>>useless;
			}
		}
		n=1;
		int b[5];
		for(int i=1;i<=7;i++){
			if(i%2==0||i==7){
				cin>>b[n++];
			}
			else{
				cin>>useless;
			}
		}
		if(!comp(a) || !comp(b)){
			cout<<"A";
			is_none=0;
		}
		if(a[4]==0 || b[4]==1){
			cout<<"B";
			is_none=0;
		}
		for(int i=1;i<=3;i++){
			if(a[i]==b[i]){
				cout<<"C";
				is_none=0;
				break;
			}
		}
		if(is_none){
			cout<<"None";
		}
		cout<<"\n";
	}
	
	return 0;
}

