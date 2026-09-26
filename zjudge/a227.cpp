#include<iostream>
using namespace std;
void hanoi(int,char,char,char);
int main(void){
	
	int n;
	while(cin>>n){	
		hanoi(n,'A','B','C');
		cout<<"\n";
	}
	
	return 0;
}
void hanoi(int n,char start,char mid,char aim){
	if(n==0){
		return;
	}
	hanoi(n-1,start,aim,mid);
	cout<<"Move ring "<<n<<" from "<<start<<" to "<<aim<<"\n";
	hanoi(n-1,mid,start,aim);

}
