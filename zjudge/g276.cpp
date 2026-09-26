#include<bits/stdc++.h>
using namespace std;
struct boss{
	int r,c,s,t;
	bool lif;
};
int main(void){
	
	int n,m,k;
	cin>>n>>m>>k;
	vector<vector<int>> arr(n,(vector<int>(m,0)));
	vector<boss> bos;
	for(int i=0;i<k;i++){
		int rr,cc,ss,tt;
		cin>>rr;
		cin>>cc;
		cin>>ss;
		cin>>tt;
		bos.push_back({rr,cc,ss,tt,true});
		
	}
	while(true){
		for(int i=0;i<k;i++){//先讓boss移動 並排除超過邊界 
			if(!bos[i].lif)continue;
			
			int &x=bos[i].r;
			int &y=bos[i].c;
			
			arr[x][y]=1;//error
			x+=bos[i].s;
			y+=bos[i].t;
			
			if(x>=n||x<0)bos[i].lif=false;//error
			if(y>=m||y<0)bos[i].lif=false;//
		}
		vector<bool> bomb(k,false);
		for(int i=0;i<k;i++){//接著再讓炸彈引爆 
			if(!bos[i].lif)continue;
			int x=bos[i].r;
			int y=bos[i].c;
			
			if(arr[x][y]>0){
				bos[i].lif=false;//先把過來的一起轟炸 
				bomb[i]=true;
			}
		}
		for(int i=0;i<k;i++){//接著再讓炸彈引爆 
			if(bomb[i]){
				int x=bos[i].r;
				int y=bos[i].c;
				arr[x][y]=0;
				bomb[i]=false;
			}
			
		}
		bool check=true;//檢查是否被滅團了 
		for(int i=0;i<k;i++){
			if(bos[i].lif){
				check=false;
			}	
		}
		if(check)break;
	}
	int sum=0;
	for(auto &i : arr){
		for(auto &j : i){
			sum+=j;
		}
	}
	cout<<sum;
	
	return 0;
}

