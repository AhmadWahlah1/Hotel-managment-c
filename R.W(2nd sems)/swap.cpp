#include<iostream>
using namespace std;
int func(int x,int y ){
	int a=x;
	int b=y;
    //int c=z;
	int temp=x;
	temp=b;
	b=a;
	a=temp;
  
	cout<<"After swaping a="<<a<<" b="<<b;
	}
main(){
	int p,o;
	cout<<"enter value of a:";
	cin>>p;
	cout<<"enter value b: ";
	cin>>o;
	func(p,o);
	//cout<<"After swaping a="<<p<<" b="<<o;
}