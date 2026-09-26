#include<iostream>
using namespace std;
int main(void){

	char a[1000],b[1000];
	cin>>a;
	for(int i=0;a[i]!='\0';i++){
		b[i]=a[i]-7;
		cout<<b[i];
	}

	return 0;
}

