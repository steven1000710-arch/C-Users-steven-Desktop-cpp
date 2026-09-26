#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int n,m;
	while(cin>>n>>m){
		vector<vector<int>> sum(n+1,vector<int> (n+1));
		
		int tmp;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> tmp;
				sum[i][j]=tmp
						 +sum[i-1][j]
						 +sum[i][j-1]
						 -sum[i-1][j-1];
			}
		}
	    for(int i = 1; i <= m; i++){
	    	int x1,y1,x2,y2;
	    	cin>>x1>>y1>>x2>>y2;
	    	int ans;
	    	ans=sum[x2][y2]//
	    	   -sum[x1-1][y2]
			   -sum[x2][y1-1]
			   +sum[x1-1][y1-1];
			cout<<ans<<"\n";
		}
	};

	
	
	return 0;
}

