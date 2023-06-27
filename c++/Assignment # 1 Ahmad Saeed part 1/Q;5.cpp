#include<iostream>
using namespace std;
main(){
	int a,b;
	cout<<"Enter two Numbers: "<<endl;
	cin>>a>>b;
	cout<<"Before swaping Numbers a= "<<a<<" & b = "<<b;
	a=a+b;
	b=a-b;
	a=a-b;
    cout<<"\nAfter Swapping Numbers a = "<<a<<" & b = "<<b<<endl;
}
