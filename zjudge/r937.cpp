#include<iostream>
using namespace std;
int main(void){
	
	int page,num;
	cin>>page>>num;
	int p[page],max=0,total=0;
	int K,A,R;
	for(int i=0;i<page;i++){
		cin>>p[i];
		if(p[i]>max) max=p[i];
		total+=p[i];
	}
	K=max;
	A=(total-K)/num;
	R=(total-K)%num;
	if(R>num/2){
		R=num-R;
	}
	cout<<K<<" "<<A<<" "<<R;
	
	return 0;
}

