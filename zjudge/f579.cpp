#include<iostream>
using namespace std;
int main(void){
	
	int a,b,t,ans=0;
	cin>>a>>b>>t;
	while(t--){
		int n,num[105]={0};
		while(cin>>n&&n){
			if(n>0)	
				num[n]++;
			else if(n<0)
				num[-n]--;
		}
		if(num[a]&&num[b])ans++;
	}
	cout<<ans;
	
	return 0;
}

