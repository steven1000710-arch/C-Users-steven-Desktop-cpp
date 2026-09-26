#include<bits/stdc++.h>
using namespace std;
struct ind{
		int beast=0;
		int d;
};
int main(void){
	
	int R,C,D,K;
	cin >> R >> C >> D >> K;
	vector<vector<ind>> v(R, vector<ind>(C,{0,D}));
	
	while(K--){
		//恐龍座標
		int x,y;
		cin >> x >> y;
		v[x][y].beast++;
	}
	int x,y,s,dd;
	int m;
	cin>>m;
	while(m--){
		
		cin>>x>>y>>s>>dd;
		s/=2;
		int sumd=0;
		for(int i=max(0,x-s);i<=min(R-1,x+s);i++){//如果有存在恐龍就歸零
			for(int j=max(0,y-s);j<=min(C-1,y+s);j++){//error
				sumd += v[i][j].beast;
				v[i][j].beast=0;
			}
		}
		if(sumd==0){//如果沒有存在恐龍就降高
			for(int i=max(0,x-s);i<=min(R-1,x+s);i++){
				for(int j=max(0,y-s);j<=min(C-1,y+s);j++){//error
					v[i][j].d-=dd;
				}
			}
		}
	}
	int sum=0,mx=INT_MIN,mn=INT_MAX;
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			sum+=v[i][j].beast;
			mx=max(mx,v[i][j].d);
			mn=min(mn,v[i][j].d);
		}
	}
// 	for(int i=0;i<R;i++){
// for(int j=0;j<C;j++){
// 		cout << v[i][j].d << " ";
// 	}
// 	cout<<endl;
// 	}
	
// 	cout << "\n";
	cout<<mx<<" "<<mn<<" "<<sum;

	return 0;
}

