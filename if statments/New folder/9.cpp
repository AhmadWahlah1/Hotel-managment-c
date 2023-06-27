#include<iostream>
using namespace std;
main(){
	float a,b;
	char ch;
	cout<<"Enter 1st value: ";
	cin>>a;
	cout<<"Enter any operater: ";
	cin>>ch;
	cout<<"Enter 2nd value: ";
	cin>>b;
	switch(ch){
	case '+':
	cout<<"Calculated Result: "<<a+b;
	break;
	case '-':
	cout<<"Calculated Result: "<<a-b;
	break;
	case '*':
	cout<<"Calculated Result: "<<a*b;
	break;
	case '/':
	cout<<"Calculated Result: "<<a/b;
	break;
	default:
		cout<<"Invalid operator or values";
    }
}
