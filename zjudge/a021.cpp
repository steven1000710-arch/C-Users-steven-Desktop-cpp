#include<iostream>//全篇輔助完成 
using namespace std;
const int len=500;
void big_plus(int a[len],int b[len],int c[len]){
	int carry=0;
	for(int i=0;i<len;i++){
		int sum=a[i]+b[i]+carry;
		c[i]=sum%10;
		carry=sum/10;
	}
	
}
void big_multiplies(int a[len],int b[len],int c[len]){
	for(int i=0;i<len;i++)c[i]=0;
	for(int i=0;i<len;i++){
		int carry=0;
		for(int j=0;i+j<len;j++){
			int sum=c[i+j]+a[j]*b[i]+carry;
			c[i+j]=sum%10;
			carry=sum/10;
		}
	}	
}
int comp(int a[len],int b[len]){
	for(int i=len-1;i>=0;i--){
		if(a[i]>b[i])return 1;
		if(a[i]<b[i])return -1;
	}
	return 0;
}
void big_minus(int a[len],int b[len],int c[len]){
	if(comp(a,b)<0){
		big_minus(b,a,c);
		return;
	}
	int carry=0;
	for(int i=0;i<len;i++){
		int sum=a[i]-b[i]+carry;
		if(sum<0)carry=-1,sum+=10;
		else carry=0;
		c[i]=sum;
	}
	
}
void big_divides(int a[len],int b[len],int c[len],int r[len]){
	int t=len-1;
	for(;t>=0&&b[t]==0;t--);
	for(int i=0;i<len;i++)r[i]=a[i],c[i]=0; 
	for(int i=len-t-1;i>=0;i--){
		int tmp[len];
		
		for(int j=0;j<len;j++)tmp[j]=0;
		for(int j=0;j<=t;j++)tmp[i+j]=b[j];
		int d=0;
		while(comp(r,tmp)>=0){
			big_minus(r,tmp,r);
			d++;
		}
		c[i]=d;
	}	
}
int main(void){
	
	string s1,s,s2;
	cin>>s1>>s>>s2;
	int a[len]={},b[len]={};
	for(int i=0;i<s1.size();i++)
		a[i]=s1[s1.size()-1-i]-'0';
	for(int i=0;i<s2.size();i++)
		b[i]=s2[s2.size()-1-i]-'0';
	
	int c[len]={};

	if(s=="+"){
		big_plus(a,b,c);
	}
	if(s=="-"){
		if(comp(a,b)<0)cout<<'-';
		big_minus(a,b,c);
	}
	if(s=="*"){
		big_multiplies(a,b,c);
	}
	if(s=="/"){
		int r[len];
		big_divides(a,b,c,r);
	}
	int t;
	bool is_0=false;
	for(t=len-1;t>=0&&c[t]==0;t--)if(t==0)is_0=true;
	if(is_0){
		cout<<'0';
		return 0;
	}
	for(int i=0;i<=t;i++)cout<<c[t-i];
	
	return 0;
}


//double sqrt(double x){
//	double t=1;
//	while(t*10<=x)t*=10;
//	double ans=0;
//	for(int i=0;i<10;i++){
//		for(int j=0;j<=9;j++){
//			if((ans+t)*(ans+t)<=x)
//				ans+=t;
//		}
//		t/=10;
//	}
//	return ans;
//}
//double sqrt2(double x){
//	double l=0,r=x;
//	for(int i=0;i<=30;i++){
//		double mid=(l+r)/2;
//		if(mid*mid<=x)l=mid;
//		else r=mid;
//	}
//	return 0;
//}
