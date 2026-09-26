#include<bits/stdc++.h>
using namespace std;
int r,c,m,a[11][11][11],n=0;
void swapp(void);
void spinn(void);
int main(void){
	
	cin>>r>>c>>m;
	int act[m];
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[n][i][j];
		}
	}
	for(int i=0;i<m;i++){
		cin>>act[i];
	}
	for(int i=0;i<m-i;i++){
		swap(act[i],act[m-i-1]);
	}
	for(int i=0;i<m;i++){
		if(act[i]==1){//ВЅВа 
			swapp();
		}
		if(act[i]==0){//±ЫВа 
			spinn();
		}	
	}
	cout<<r<<" "<<c<<"\n";
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cout<<a[n][i][j];
			if(j<c)cout<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
void swapp(void){
	for(int i=1;i<=r-i;i++){//
		for(int j=1;j<=c;j++){
			swap(a[n][i][j],a[n][r-i+1][j]);
		}
	}
}
void spinn(void){
	int newr=c,newc=r;
	for(int i=1;i<=newr;i++){
		for(int j=1;j<=newc;j++){//
			a[n+1][i][j]=a[n][j][c-i+1];//
		}
	}
	
	c=newc,r=newr;
	n++;
	
}
