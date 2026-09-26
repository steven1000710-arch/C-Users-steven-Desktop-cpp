#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int com;
	int n,a;
	vector<int> vec;
	while(cin>>com){
		switch(com){
			case 1 : 
				cin>>n;
				vec.insert(vec.begin(),n);
				break;
			case 2 : 
				cin>>n;
				vec.push_back(n);
				break;
			case 3 : {	
				cin>>n>>a;
				auto pos=find(vec.begin(),vec.end(),a);
				if(pos==vec.end())	cout<<"peko";
				else 				vec.insert(pos,n);
				break;
			}
			case 4 : {
				cin>>n>>a;
				auto pos=find(vec.begin(),vec.end(),a);
				if(pos==vec.end())	cout<<"peko";
				else 				vec.insert(pos+1,n);
				break;
			}
			case 5 : {
				cin>>a;
				auto pos=find(vec.begin(),vec.end(),a);
				if(pos==vec.end())	cout<<"peko";
				else if(pos==vec.begin())	cout<<"NULL";
				else cout <<*(pos-1);
				break;
			}
			case 6 : {
				cin>>a;
				auto pos=find(vec.begin(),vec.end(),a);
				if(pos==vec.end())	cout<<"peko";
				else if(pos==vec.end()-1)	cout<<"NULL";
				else cout <<*(pos+1);
				break;
			}
			case 7 : {
				
				cin>>a;
				auto pos=find(vec.begin(),vec.end(),a);
				if(pos==vec.end())	cout<<"peko";
				else vec.erase(pos);
				break;
			}
		}
	};
	
	return 0;
}

