#include<iostream>
using namespace std;
int main(void){

	int n,m=0;
	cin>>n;
	for(int i=2;n!=1;i++){
		if(n%i==0){
			while(n%i==0){
				m++;
				n/=i;
			}
			if(m!=1)cout<<i<<"^"<<m;
			else cout<<i;

			m=0;
			if(n==1)break;
			cout<<" * ";
		}	
	}

	return 0;
}

