//#include<bits/stdc++.h>
//using namespace std;
//int main(void){
//	
//	int n,m,k;
//	cin>>n>>m>>k;
//	vector<int> arr(n+1);
//	for(int i=1;i<=arr.size();i++){
//		arr[i]=i;
//	}
//	int i=1;
//	while(k--){
//		for(;i<=m;i++){
//			if(i==n+1){//怕邊界 
//				i=1;
//			}
//			else if(i==m){//是否要爆炸了 
//				arr.erase(arr.begin()+i);
//			}
//		}
//	}
//	cout<<arr+i+1
//	
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,k;
	cin>>n>>m>>k;
	vector<bool> arr(n+1,true);
	int ind=0;
	while(k--){
		for(int i=1;i<=m;i++){
			ind++;
			if(ind==n+1){//怕邊界 
				ind=1;
			}
			if(arr[ind]==false){//是否淘汰 
				i--;
			}
			
			else if(i==m){//是否要爆炸了 
				arr[ind]=false;
			}
		}
	}
	int i=ind;
	while(arr[i]!=true){
		i++;
			if(i==n+1){//怕邊界 
				i=1;
			}
			if(arr[i]==false){//是否淘汰 
				continue;
			}
	}
	cout<<i;
	
	return 0;
}

