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
    int c=1;
	cout<<"\nFactorial of "<<n<<" is : ";
	for(n;n>0;n--){
		c=c*n;
	}
	cout<<c;
}