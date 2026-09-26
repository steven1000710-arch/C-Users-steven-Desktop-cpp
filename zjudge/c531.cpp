#include<iostream>
#include<string>
#include<sstream> 
using namespace std;
int main(void){

	string line;
	getline(cin,line);
	for(int i=0;i<int(line.size());i++){//
		if(line[i]==',')//
		line[i]=' ';//
	}
	stringstream ss(line);
	int x,t=-1;
	int arr[20]={};
	while(ss>>x){
		arr[++t]=x;
	};
	int tem;
	for(int i=1;i<=t;i+=2){
		for(int j=1;j<=t-2;j+=2){
			if(arr[j]>arr[j+2]){
				tem=arr[j];
				arr[j]=arr[j+2];
				arr[j+2]=tem;
			}
		}
		
	}
	for(int i=0;i<=t;i++){
		cout<<arr[i];
		if(i!=t){
			cout<<',';
		} 
	}

	return 0;
}

