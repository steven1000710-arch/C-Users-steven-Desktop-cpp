#include<iostream>
#include<math.h>
using namespace std;
int main(void){

	int a,b,c;
	double x1,x2,D;
	cin>>a>>b>>c;
	D=b*b-4*a*c;
	if(D>0){
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		cout<<"Two different roots x1="<<x1<<" , x2="<<x2;
	}
	
	else if(D==0){
		x1=-b/(2*a);
		cout<<"Two same roots x="<<x1;
	}
	else
		cout<<"No real root";

	return 0;
}
/*輸入說明
每組輸入共一行，內含三個整數 a, b, c 以空白隔開。

輸出說明
Two different roots x1=?? , x2=??

Two same roots x=??

No real root

PS: 答案均為整數，若有兩個根則大者在前*/
