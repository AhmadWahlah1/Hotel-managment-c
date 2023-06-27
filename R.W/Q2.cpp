#include<iostream>
using namespace std;
main(){//decleration
	void power(int,int);
	int a,i;
	cout<<"Enter any number: ";
	cin>>a;
	cout<<"Enter its power: ";
	cin>>i;
	power(a,i);//calling
}
void power(int v,int g){//defination
    int p=1;
	cout<<"\nCalculation of power: ";
		for(int b=1;b<=g;b++){
	    p=p*v;
	}
	cout<<p;
}