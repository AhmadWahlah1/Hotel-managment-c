#include<iostream>
using namespace std;
main(){
	int n,l,a;
	cout<<"Enter a table number: ";
	cin>>n;
	cout<<"Enter Length of table: ";
	cin>>l;
	for(a=1;a<=l;a++){
		cout<<"\n"<<n<<"*"<<l<<"="<<n*a;
	}
}
