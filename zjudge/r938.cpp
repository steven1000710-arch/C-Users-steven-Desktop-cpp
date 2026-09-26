#include<iostream>
using namespace std;
void activity(int);
int tire=0,effect=0;
int main(void){
	
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		activity(a);
		if(tire<0)tire=0;
		if(tire>100){
			tire=0;
			effect=0;
		}
	}
	cout<<effect;
	
	return 0;
}
void activity(int a){
	switch(a){
		case 1 : 
			tire+=25;
			effect+=10;
			break;
		case 2 : 
			tire+=10;
			effect+=20;
			break;
		case 3 : 
			tire+=5;
			effect+=15;
			break;
		case 4 : 
			tire+=4;
			effect+=20;
			break;
		case 5 : 
			tire-=10;
			effect-=15;
			break;
		case 6 : 
			tire-=35;
			effect=0;
			break;
		case 7 : 
			tire=0;
			effect*=0.9;
			break;
	}
}
