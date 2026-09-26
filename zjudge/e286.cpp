#include<iostream>
using namespace std;
int main(void){
	
	int a[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>a[i][j];
		}
	}
	//host guest
	int total[4]={};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			total[i]+=a[i][j];
		}
	}
	int h=0,g=0;
	cout<<total[0]<<":"<<total[1]<<"\n";
	cout<<total[2]<<":"<<total[3]<<"\n";
	if(total[0]>total[1])
		h++;
	else 
		g++;
	if(total[2]>total[3])
		h++;
	else 
		g++;
	
	if(h>g)
		cout<<"Win";
	else if(h==g)
		cout<<"Tie";
	else 
		cout<<"Lose";
	
	return 0;
}

