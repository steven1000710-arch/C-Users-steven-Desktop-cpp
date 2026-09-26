#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int n,m;
	cin>>n>>m;
	vector<vector<int>> frn(n+1,{1,4,6,3});
	vector<vector<int>> rig(n+1,{1,2,6,5});
	
	while(m--){
		int a,b;
		cin>>a>>b;
		if(b==-1){
			for(int i=3;i>=0;i--){
				if(i==0){
					swap(frn[a][0],frn[a][3]);
					break;
				}
				else swap(frn[a][i],frn[a][i-1]);
			}
			rig[a][0]=frn[a][0];
			rig[a][2]=frn[a][2];
		}
		else if(b==-2){
			for(int i=3;i>=0;i--){
				if(i==0){
					swap(rig[a][0],rig[a][3]);
					break;
				}
				else swap(rig[a][i],rig[a][i-1]);
			}
			frn[a][0]=rig[a][0];
			frn[a][2]=rig[a][2];
		}else{//
			for(int i=0;i<4;i++){
				swap(frn[a][i],frn[b][i]);
			}
			for(int i=0;i<4;i++){
				swap(rig[a][i],rig[b][i]);
			}
			
		}//	
	}
	for(int i=1;i<=n;i++){
		cout<<frn[i][0]<<" ";
	}
	
	
	return 0;
}

