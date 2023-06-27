#include<iostream>
using namespace std;
main(){
	int a,b,temp;
	cout<<"Enter First Number : ";
	cin>>a;
	cout<<"Enter Second Number : ";
	cin>>b;
	cout<<"Before Swapping a = "<<a<<" & b = "<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nAfter Swapping a = "<<a <<" & b = "<<b;
}
