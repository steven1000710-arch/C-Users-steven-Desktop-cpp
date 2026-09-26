#include<iostream>
using namespace std;
int gcd(int,int);
int main(void){

	int a,b;
	cin>>a>>b;
	if(b>a){
		int tem=a;
		a=b;
		b=tem;
	}
	cout<<gcd(a,b);

	return 0;
}
int gcd(int a,int b){
	int rest=a%b;
	if(rest==0)
	return b;
	else
	return gcd(b,rest);//
}
