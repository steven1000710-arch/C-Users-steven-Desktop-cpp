#include<bits/stdc++.h>
using namespace std;
int point1=0,point2=0;
void round(int ,int );
int main(void){

	ios::sync_with_stdio(false), cin.tie(nullptr); 
	int n;
	cin>>n;
	while(n--){
		int a,b;
		cin>>a>>b;
		round(a,b);
	};
	cout<<point1<<" "<<point2;

	return 0;
}
void round(int a,int b){
	if(a==b&&a==2)point1-=2,point2-=2;
	else if(a==2&&b==5)point1+=2,point2-=1;
	else if(a==2&&b==0)point1-=2,point2+=1;
	else if(a==5&&b==5);
	else if(a==5&&b==2)point1-=1,point2+=2;
	else if(a==5&&b==0)point1+=1,point2-=1;
	else if(a==0&&b==5)point1-=1,point2+=1;
	else if(a==0&&b==2)point1+=1,point2-=2;
	else if(a==0&&b==0);
}
