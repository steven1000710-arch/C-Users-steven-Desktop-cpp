#include<bits/stdc++.h>//ai:deal with string
using namespace std;
using ll=long long;
int main(void){
	
	string num;
	int odd=0,even=0;
	cin>>num;
	for(int i=0;num[i]!='\0';i++){
		if(i%2==0)odd+=num[i]-'0';
		else even+=num[i]-'0';
	}
	cout<<abs(odd-even)<<"\n";//abs(int )
	
	return 0;
}

