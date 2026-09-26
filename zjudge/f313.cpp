#include<bits/stdc++.h>
#define e a[i][j+1]
#define s a[i+1][j]
#define w a[i][j-1]
#define n a[i-1][j]
#define ep plus[i][j+1]
#define sp plus[i+1][j]
#define wp plus[i][j-1]
#define np plus[i-1][j]
using namespace std;
int main(void){
	
	int r,c,k,m;
	cin>>r>>c>>k>>m;
	vector<vector<int>> a(r+2,vector<int> (c+2,-1));
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];
		}
	}
	int maxu=0,minu=100000;
	int plus[r+2][c+2];
	while(m--){
		
		for(int i=0;i<=r+1;i++){//
			for(int j=0;j<=c+1;j++){//
				plus[i][j]=0;//
			}
		}
		
		for(int i=1;i<=r;i++){
			for(int j=1;j<=c;j++){
				if(a[i][j]==-1)continue;//
				if(e!=-1){
					ep+=a[i][j]/k;//
					plus[i][j]-=a[i][j]/k;
				}
				if(s!=-1){
					sp+=a[i][j]/k;//
					plus[i][j]-=a[i][j]/k;
				}
				if(w!=-1){
					wp+=a[i][j]/k;//
					plus[i][j]-=a[i][j]/k;
				}
				if(n!=-1){
					np+=a[i][j]/k;//
					plus[i][j]-=a[i][j]/k;
				}
			}
		}
		for(int i=1;i<=r;i++){
			for(int j=1;j<=c;j++){
				if(a[i][j]!=-1){
					a[i][j]+=plus[i][j]; 
				}
			}
		}	
	};
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(a[i][j]!=-1){ 
				maxu=max(maxu,a[i][j]);//只要求最後一天喔 
				minu=min(minu,a[i][j]);//
			}
		}
	}
	cout<<minu<<"\n"<<maxu<<"\n";
	
	return 0;
}

