#include<bits/stdc++.h>
using namespace std;
int ave(int,int,int);
int main(void){
	
	int n,d,num=0,ans=0;
	cin>>n>>d;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		int abss=max({a,b,c})-min({a,b,c});//
		if(abss>=d){
			num++;
			ans+=ave(a,b,c);
		}
	}
	cout<<num<<" "<<ans;
	
	return 0;
}
int ave(int a,int b,int c){
	return (a+b+c)/3;
}
