#include<iostream>
using namespace std;
int main(void){

	int n,a[5];
	cin>>n;
	while(n--){
		cin>>a[0]>>a[1]>>a[2]>>a[3];
		
		if(a[2]-a[1]==a[1]-a[0])
			a[4]=a[3]+a[2]-a[1];
			
		else if(a[2]/a[1]==a[1]/a[0])
			a[4]=a[3]*a[2]/a[1];
			
		for(int i=0;i<5;i++)cout<<a[i]<<" ";
		
	cout<<endl;
	};

	return 0;
}

