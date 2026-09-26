#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int t,p[20],f[20],tmp;
	int cp=0,cf=0;
	cin>>t;
	while(t--){
		cin>>tmp;
		if(tmp>=60)p[cp++]=tmp;
		if(tmp<60)f[cf++]=tmp;
	}
	for(int i=0;i<cp;i++){
		for(int j=0;j<cp-i-1;j++){
			if(p[j]>p[j+1])
				swap(p[j],p[j+1]);
		}
	}
	for(int i=0;i<cf;i++){
		for(int j=0;j<cf-i-1;j++){
			if(f[j]>f[j+1])
				swap(f[j],f[j+1]);
		}
	}
	for(int i=0;i<cf;i++){
		cout<<f[i]<<" ";
	}
	for(int i=0;i<cp;i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;
	if(cf==0)cout<<"best case\n";
	else cout<<f[cf-1]<<"\n";
	if(cp==0)cout<<"worst case\n";
	else cout<<p[0]<<"\n";
	
	
	return 0;
}

