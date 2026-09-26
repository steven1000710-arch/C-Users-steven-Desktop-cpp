#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int t;
	cin>>t;
	int a[++t];
	for(int i=1;i<t;i++)cin>>a[i];
	int max_va=0,ans=-200000;//
	for(int i=1;i<t;i++){
		ans=max(ans,max_va-a[i]);
		max_va=max(max_va,a[i]);
	}
	cout<<ans;
	
	
	return 0;
}

