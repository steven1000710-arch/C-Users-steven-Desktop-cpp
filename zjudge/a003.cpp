#include<iostream>
using namespace std;
int main(void){

	int M,D;
	cin>>M>>D;
	int s=(M*2+D)%3;
	if(s==0)cout<<"���q";
	if(s==1)cout<<"�N";
	if(s==2)cout<<"�j�N";
	
	return 0;
}
/*M=��
D=��
S=(M*2+D)%3*/

