#include<bits/stdc++.h>
using namespace std;
int n,m,sum=0;
vector<vector<int>> arr;
int best(int,int);
int main(void){
	
	cin>>n>>m;
	int x=0,y=0;//min pos
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
			if(arr[x][y]>arr[i][j]){
				x=i;
				y=j;
			}
		}
	}
	sum+=best(x,y);
	cout<<sum;
	
	return 0;
}
int best(int x,int y){
	int nval[5]={arr[x+1][y],arr[x][y-1],
				 arr[x-1][y],arr[x][y-1]};
	bool news[5];
	//1先找能走的方向 2運算能走中最低地 3找到並封住下一步  
	if(arr[x+1][y]!=-1 && (x+1!=n))news[1]=true;//East找到四方中最低的方向 並自動排除邊界外 
	if(arr[x][y-1]!=-1 && (y!=0))news[2]=true;
	if(arr[x-1][y]!=-1 && (x!=0))news[3]=true;
	if(arr[x][y+1]!=-1 && (y+1!=m))news[4]=true;
	
	for(int i=1;true;i++){
		int mpx,mpy,minn=1000;
		if(news[i]){
			if(nval[i]<=minn){
				mpx=
			}
		}
	}
	if(E){	
		int Eval=arr[x+1][y];
		if(first){
			xmin=x+1;
			ymin=y;
			first=false;
		}
		if(E<arr[xmin][ymin]){
			xmin=x+1;
			ymin=y;
			E=-1;
		}
	}
	if(S)){//South
		Sv=arr[x][y-1];
		if(first){
			xmin=x;
			ymin=y-1;
			first=false;
		}
		if(S<arr[xmin][ymin]){
			xmin=x;
			ymin=y-1;
			S=-1;
		}
	}
	if(W){//West
		int W=arr[x-1][y];
		if(first){
			xmin=x-1;
			ymin=y;
			first=false;
		}
		if(W<arr[xmin][ymin]){
			xmin=x-1;
			ymin=y;
			W=-1;
		}
	}
	if(N){//North
		int N=arr[x][y-1];
		if(first){
			xmin=x;
			ymin=y+1;
			first=false;
		}
		if(N<arr[xmin][ymin]){
			xmin=x;
			ymin=y+1;
			N=-1;
		}
	}
	if(E==-1&&S==-1&&W==-1&&N==-1)return arr[x][y];
	else return best(xmin,ymin);
}

