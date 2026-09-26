#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int n,m;
	cin>>n>>m;
	vector<vector<int>> a(n+3,vector<int>(m+3,-1));
	int mn=INT_MAX,x=1,y=1;//
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			
			cin>>a[i][j];
			
			if(a[i][j] < mn && a[i][j] != -1){
				mn=a[i][j];
				x=i;
				y=j;
			}
		}
	}
	int dx[4]={0,1,0,-1};
	int dy[4]={1,0,-1,0};
	
	int total=a[x][y];
	a[x][y]=-1;
	
	while(true){
		
		int nx=-1,ny=-1;
		for(int i=0;i<4;i++){
			int tx=x+dx[i],ty=y+dy[i];
			
			if(a[tx][ty]==-1)continue;
			 
			if(nx==-1||a[tx][ty] < a[nx][ny]){
				nx=tx;
				ny=ty;
			}
		}
		
		if(nx==-1)break;
		total+=a[nx][ny];
		a[nx][ny]=-1;
		x=nx;
		y=ny;
		
		
	}
	cout<<total;
	
	return 0;
}

