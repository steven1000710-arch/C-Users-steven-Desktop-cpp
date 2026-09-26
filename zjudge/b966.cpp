#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int main(void){
	
	vector<bool> arr(MAX);
	int n;
	cin>>n;
	while(n--){
		int l,r;
		cin>>l>>r;
		for(int i=l;i<r;i++){
			arr[i]=true;
		}
	}
	int cnt=0;
	for(int i=0;i<MAX;i++){
		cnt+=arr[i];
	}
	cout<<cnt;
	
	return 0;
}
//用bool陣列去紀錄每一格是否有遭到覆蓋 最後在加起來總和 
