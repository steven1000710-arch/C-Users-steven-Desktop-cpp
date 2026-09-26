#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	vector<int> arr;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int max=0;
		for(int j=0;j<m;j++){
			int x;
			cin>>x;
			if(x>max)max=x;
		}
		arr.push_back(max);
	}
	int sum=0;
	for(int i=0;i<arr.size();i++)sum+=arr.at(i);
	cout<<sum<<"\n";
	bool div=false,first=true;//
	for(int i=0;i<arr.size();i++){
		if(sum%arr[i]==0){
			if(!first)cout<<" ";//
			first=0;
			cout<<arr[i];
			div=true;
		}
	}
	if(!div)cout<<"-1";
	
	return 0;
}

