#include<iostream>
using namespace std;
int main(void){

//	int t;
//	cin>>t;
		int y;
	while(cin>>y&&y){
		if((y%400==0||y%100!=0)&&y%4==0)
			cout<<"a leap year\n";
		else
			cout<<"a normal year\n";
	};

	return 0;
}

