#include<iostream>
using namespace std;
main(){
	int n,a=1;
	cout<<"Enter any number: ";
	cin>>n;
	cout<<"Table of that number is: ";
	while(a<=10){
		cout<<"\n"<<n<<"*"<<a<<"="<<n*a;
		a++;
	}
}