#include<bits/stdc++.h>
using namespace std;
int ppp(int [],int,bool [],int );
int main(void){
	
	int n;
	cin>>n;
	int arr[n],ans=0;
	bool is_use[n]={false};
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++){
		if(is_use[i])continue;
		int start=i;
		ans+=ppp(arr,i,is_use,start);
	}
	cout<<ans;
	
	return 0;
}
int ppp(int a[],int i,bool is_use[],int start){
	is_use[i]=true;
	is_use[a[i]]=true; 
	if(a[i]!=start)
		return ppp(a,a[i],is_use,start);
	else
		return 1;
	
}
