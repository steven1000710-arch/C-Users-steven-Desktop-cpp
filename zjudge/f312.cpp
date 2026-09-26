#include<iostream>
using namespace std;
int a[2],b[2],c[2];
int y(int,int);
int main(void){
	
	cin>>a[0]>>b[0]>>c[0];
	cin>>a[1]>>b[1]>>c[1];
	int n;
	cin>>n;
	int x1,x2;
	int max=-1000000;
	for(int i=0;i<=n;i++){
		x1=i,x2=n-i;
		if(y(x1,0)+y(x2,1)>max)
			max=y(x1,0)+y(x2,1);
	}
	cout<<max;
	
	return 0;
}
int y(int x,int ind){
	return a[ind]*x*x+b[ind]*x+c[ind];
}
