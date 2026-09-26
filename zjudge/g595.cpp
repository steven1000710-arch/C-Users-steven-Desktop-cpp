#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int t,ans=0;
	cin>>t;
	int a[t+2];
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	for(int i=0;i<t;i++){
		if(i==0&&a[0]==0){
			ans+=a[1];
			continue;
		}
		if(i==t-1&&a[t-1]==0){
			ans+=a[t-2];
			continue;
		}
		if(a[i]==0){
			ans+=min(a[i-1],a[i+1]);
		}
	}
	cout<<ans;
	
	return 0;
}

