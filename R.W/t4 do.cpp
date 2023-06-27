#include<iostream>
using namespace std;
main(){
	int a,b,c;
	cout<<"Enter starting value: ";
	cin>>a;
	cout<<"Enter last point: ";
	cin>>b;
	a++;
	do{
		cout<<a<<endl;
		c=a+b;
		a++;
	}while(a<b);
	cout<<"Sum of range is: "<<c;
}