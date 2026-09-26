#include<bits/stdc++.h>
using namespace std;
int main(void){
	
	int a[3];
	while(cin>>a[0]>>a[1]>>a[2]){
		sort(a+0,a+3);
		cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
		if(a[0]+a[1]<=a[2])cout<<"No";
		else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2])cout<<"Obtuse";
		else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])cout<<"Right";
		else if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2])cout<<"Acute";
	};
	
	/*若 a+b ≦ c　　　　　，三線段無法構成三角形

　　若 a×a+b×b ＜ c×c　　，三線段構成鈍角三角形(Obtuse triangle)

　　若 a×a+b×b ＝ c×c　　，,三線段構成直角三角形(Right triangle)

　　若 a×a+b×b ＞ c×c　　，三線段構成銳角三角形(Acute triangle)*/
	return 0;
}

