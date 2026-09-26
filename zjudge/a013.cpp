#include<iostream>
#include<math.h> 
using namespace std;
int rome(char []);
int r(char);
char *Rome(int);
char R(int);
int main(void){
	
	char a[100],b[100];
	while(cin>>a>>b){
		int abss;//
		abss=fabs(rome(a)-rome(b));//
		if(abss==0)cout<<"ZERO"<<endl;
		else cout<<Rome(abss)<<endl;
	}
	
	
	return 0;
}
int rome(char a[100]){
	int total=0;
	for(int i=0;a[i]!='\0';i++){//
		if( r(a[i]) < r(a[i+1]) ){
			total-=r(a[i]);
			continue;
		}
		total+=r(a[i]);
	}
	return total;
}
int r(char c){
	int n=0;//
	switch(c){
		case 'I': n=1;break;//
		case 'V': n=5;break;
		case 'X': n=10;break;
		case 'L': n=50;break;
		case 'C': n=100;break;
		case 'D': n=500;break;
		case 'M': n=1000;break;
	}
	return n;
}
char *Rome(int n){
		static char abss[100];
		int index=0;
		for(int i=1000;i>0;i/=10){
			if(n/i==9){
				abss[index]=R(i);
				abss[index+1]=R(10*i);
				index+=2;
				n-=9*i;
			}
			if(n/i==4){
				abss[index]=R(i);
				abss[index+1]=R(5*i);
				index+=2;
				n-=4*i;
			}
			if(n>=5*i){//
				abss[index++]=R(5*i);
				n-=5*i;
			}
			for(int j=1;j<=3;j++){
				if(n>=i){
				abss[index++]=R(i);
				n-=i;
				}
			}
			
		}
		abss[index]='\0';//
	return abss;
}
char R(int n){
	char c;
	switch(n){
		case 1 : c='I';break;
		case 5 : c='V';break;//
		case 10 : c='X';break;//
		case 50 : c='L';break;//
		case 100 : c='C';break;//
		case 500 : c='D';break;//
		case 1000 : c='M';break;//
	}
	return c;
}
