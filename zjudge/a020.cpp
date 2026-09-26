#include<iostream>
using namespace std;
enum English{
	A=10,B,C,D,E,F,G,H,J,K,L,M,N,P
		,Q,R,S,T,U,V,X,Y,W,Z,I,O
};
int main(void){

	char e,a[9];//
	int total=0,n;
	cin.get(e);
	for(int i=8;i>=0;i--){//
		cin.get(a[i]);
	}
	for(int i=8;i>=1;i--){//
		total+=(a[i]-'0')*(i);//
	}
	switch(e){//
	    case 'A': n=A; break;
	    case 'B': n=B; break;
	    case 'C': n=C; break;
	    case 'D': n=D; break;
	    case 'E': n=E; break;
	    case 'F': n=F; break;
	    case 'G': n=G; break;
	    case 'H': n=H; break;
	    case 'J': n=J; break;
	    case 'K': n=K; break;
	    case 'L': n=L; break;
	    case 'M': n=M; break;
	    case 'N': n=N; break;
	    case 'P': n=P; break;
	    case 'Q': n=Q; break;
	    case 'R': n=R; break;
	    case 'S': n=S; break;
	    case 'T': n=T; break;
	    case 'U': n=U; break;
	    case 'V': n=V; break;
	    case 'X': n=X; break;
	    case 'Y': n=Y; break;
	    case 'W': n=W; break;
	    case 'Z': n=Z; break;
	    case 'I': n=I; break;
	    case 'O': n=O; break;
	}
	total+=(n%10)*9+n/10;//
	total+=a[0]-'0';
	if(total%10==0)cout<<"real";
	else cout<<"fake";
	

	return 0;
}

