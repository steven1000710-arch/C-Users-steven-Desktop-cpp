#include<bits/stdc++.h>//¥þ½g»²§U 
using namespace std;
bool check(string str){
	stack<char> ch;
	for(int i=0;i<str.size();i++){
		
		if(str[i]=='('||str[i]=='['||str[i]=='{'){
			ch.push(str[i]);
		}
		else if(str[i]==')'||str[i]==']'||str[i]=='}'){
			if(ch.empty())return false;
			if((str[i]==')'&&ch.top()=='(')||
			   (str[i]==']'&&ch.top()=='[')||//
			   (str[i]=='}'&&ch.top()=='{')){//
			   	
			   	ch.pop();
			   }
			else return false;
		}	
	}
	return ch.empty();
}
int main(void){
	
	int t;
	cin>>t;
	cin.ignore();////
	string str;
	while(t--){
		getline(cin,str);
		if(check(str)){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	
	return 0;
}

