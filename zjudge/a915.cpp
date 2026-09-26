#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int n;
	cin>>n;
	pair<int,int> p[n];
	for(auto &i : p)
		cin>>i.first>>i.second;
	sort(p,p+n);
	for(auto &i : p)
		cout<<i.first<<" "<<i.second<<"\n";
	
	return 0;
}

