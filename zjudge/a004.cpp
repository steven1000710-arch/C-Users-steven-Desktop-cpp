#include<iostream>
using namespace std;
int main(void){

	int a;
	while(cin>>a){
		if(( a%4==0 && a%100!=0 ) || a%400==0)
		cout<<"�|�~";
		else
		cout<<"���~";
		cout<<endl;
	};

	return 0;
}
//* �褸�~�Q4�㰣�B���Q100�㰣�A�γQ400�㰣�̧Y���|�~
//* �ϥ� cin , cout �Ӷi���J��X

