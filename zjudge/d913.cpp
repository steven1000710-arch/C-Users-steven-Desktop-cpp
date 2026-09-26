#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int a[6][6],c[6],ans[6]={1,2,3,4,5,6};
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cin>>a[i][j];
		}
		cin>>c[i];
	}
	do{
		bool tf=true;
		for(int i=0;i<6;i++){
			int cnt=0;
			for(int j=0;j<6;j++){
				if(ans[j]==a[i][j])
					cnt++;
			}	
			if(cnt!=c[i]){
				tf=false;
				break;
			}
		}
		if(tf){
			for(int i=0;i<6;i++){
				cout<<ans[i]<<" ";
			}
			break;
		}
	}while(next_permutation(ans+0,ans+6));
	
	return 0;
}

