#include<iostream>
using namespace std;
main(){//decleration
	void fac(int);
	int a;
	cout<<"Enter any number: ";
	cin>>a;
	fac(a);//calling
}
void fac(int n){//defination
	cout<<"\nFactorial of "<<n<<" is : ";
	for(int b=n-1;b>=1;b--){
		n=n*b;
	}
	cout<<n;
}