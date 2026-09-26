#include<iostream>
using namespace std;
int main(void){
	
	int a,b,c;
	int andd=0,orr=0,xorr=0;
	cin>>a>>b>>c;
	if((a&&b)==c){
		andd=1;
	}
	if((a||b)==c){
		orr=1;	
	}
	if((!(a&&b)&&(a||b))==c){
		xorr=1;
	}
	if(andd+orr+xorr==0){
		cout<<"IMPOSSIBLE\n";
	}
	else{
		if(andd){
			cout<<"AND\n";
		}
		if(orr){
			cout<<"OR\n";
		}
		if(xorr){
			cout<<"XOR\n";
		}
	}
	
	return 0;
}

