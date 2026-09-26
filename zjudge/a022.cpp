#include<bits/stdc++.h>
using namespace std;
int main(void){

	string a;
	cin>>a;
	int len=a.length()-1;
	bool tf=true;
	for(int i=0;i<=len;i++){
		if(a.at(i)!=a.at(len-i))tf=false;
	}
	if(tf==1)//
	cout<<"yes";
	else if(tf==0)// 
	cout<<"no";

	return 0;
}

