#include<bits/stdc++.h>
using namespace std;
int nx;
int ny;
int dir;
void step(vector<pair<int,int>>,vector<vector<int>>);
int main(void){
	
	int n;
	cin>>n>>dir;
	vector<vector<int>> arr(n+2,(vector<int>(n+2)));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}
	nx=(n+1)/2;
	ny=(n+1)/2;
	cout<<arr[nx][ny];
	vector<pair<int,int>> d={{0,-1},{-1,0},{0,1},{1,0}};
	for(int i=1;true;i++){
		if(i==n){
			for(int j=1;j<i;j++)step(d,arr);
			break;
		}
		for(int j=1;j<=i;j++)step(d,arr);
		if(++dir==4)dir=0;
		
		for(int j=1;j<=i;j++)step(d,arr);
		if(++dir==4)dir=0;
	}
	cout<<endl;
	
	return 0;
}
void step(vector<pair<int,int>> d,vector<vector<int>> arr){
	int dx=d[dir].first;
	int dy=d[dir].second;
	nx+=dx;
	ny+=dy;
	cout<<arr[nx][ny];
}


