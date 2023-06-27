#include<iostream>
using namespace std;
main(){
	int n,a=1;
	cout<<"Enter any number: ";
	cin>>n;
	cout<<"Table of that number is: ";
	do{
		cout<<"\n"<<n<<"*"<<a<<"="<<n*a;
		a++;
	}while(a<=10);
}