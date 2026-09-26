#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int t;
	string s[t],ans[t];
	
	for(int k=0;k<t;k++){
		cin>>s[k];
		ans[k]=s[k];
		for(int i=0;i+1<s[t].size();i++){
			for(int j=0;j+i+1<s[t].size();j++){
				if(s[i][j]>s[i][j+1])
					swap(s[i][j],s[i][j+1]);
			}
		}
	}
	int num[t]={1};
	for(int i=0;i<t;i++){
		for(int j=0;j+1<s[t].size();j++){
			if(s[i][j]!=s[i][j+1])
				num[i]++;
		}
	}
	int min_pos=0;
	for(int i=0;i<t;i++){
		if(num[min_pos]>num[i])
		min_pos=i;
	}
	cout<<ans[min_pos];
	
	return 0;
}

