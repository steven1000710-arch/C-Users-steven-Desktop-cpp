#include<iostream>
#include<string>
#include<sstream> 
using namespace std;
int main(void){
	
	int t,a[101],i=1;
	cin>>t;
	int tem=t,mid;
	bool even=(t%2==0)?true:false;
	while(t--){
		cin>>a[i++];
	};
	if(even){
		mid=(a[tem/2]+a[tem/2+1])/2;
	}
	else{
		mid=a[(tem+1)/2];
	}
	cout<<mid;
	
	return 0;
}

