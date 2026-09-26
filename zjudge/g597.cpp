#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(ll,ll);
int main(void){
	
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	vector<ll> diff(n+2,0);//
	while(m--){//差分陣列 
		int l,r,w;
		cin>>l>>r>>w;
		diff[l]+=w;
		diff[r+1]-=w;
	}
	for(int i=1;i<=n;i++){//array每位子工作量 
		diff[i]+=diff[i-1];
	} 
	vector<ll> t(n+2);
	for(int i=1;i<=n;i++){//輸入每個機器一單位所需時間 
		cin>>t[i];
	}
	sort(diff.begin()+1,diff.begin()+n+1,cmp);//大到小 //*******
	sort(t.begin()+1,t.begin()+n+1);//小到大 //*******
	
	ll total=0;
	for(int i=1;i<=n;i++){
		total+=t[i]*diff[i];
	}
	cout<<total;
	
	return 0;
}
bool cmp(ll x,ll y){
	return x>y;
}
