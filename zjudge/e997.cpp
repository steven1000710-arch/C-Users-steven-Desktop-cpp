#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(void){

	string line;
	getline(cin,line);
	stringstream ss(line);
	string x[50];
	int i=-1;
	while(ss>>x[++i]);
	int n;
	cin>>n;
	cout<<x[i-n];

	return 0;
}

