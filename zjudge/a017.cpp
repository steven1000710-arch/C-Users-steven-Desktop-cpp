#include<iostream>
#include<string>
using namespace std;
int cut(string,int,int);
int main(void){

	string a[10];
	int i=0;
	while(getline(cin,a[i])){
		cut(a[i],0,a[i].length()-1);
		i++;
	};

	return 0;
}
int cut(string a,int f,int b){
	for(int i=f;i<=b;i+=2){
		if(a.at(i)=='('){//還需刪除小單元裡的")" 
			for(int j=i;j<=b;j+=2){
				if(a.at(j)==')'){
					cut(a,i,j);
				}
			}
		}
	}
	for(int i=f;i<=b;i+=2){
		if(a.at(i)=='*'){
			a.at(i-2)*=a.at(i+2);
			a.replace(i,4,a.substr(i+4));
		}
	}
	for(int i=f;i<=b;i+=2){
		if(a.at(i)=='/'){
			a.at(i-2)/=a.at(i+2);
			a.erase(i,4);
		}
	}
	for(int i=f;i<=b;i+=2){
		if(a.at(i)=='%'){
			a.at(i-2)%=a.at(i+2);
			a.erase(i,4);
		}
	}
	for(int i=f;i<=b;i+=2){
		if(a.at(i)=='+'){
			a.at(i-2)+=a.at(i+2);
			a.erase(i,4);
		}
	}
	for(int i=f;i<=b;i+=2){
		if(a.at(i)=='-'){
			a.at(i-2)-=a.at(i+2);
			a.erase(i,4);
		}
	}
}

