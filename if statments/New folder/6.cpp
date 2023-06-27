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
if(ch=='/'||ch=='*'||ch=='-'||ch=='+'){
	if(ch=='+'){
		cout<<"Calculated Result: "<<a+b;
	}
	else if(ch=='-'){
			cout<<"Calculated Result: "<<a-b;
	}
	else if(ch=='*'){
			cout<<"Calculated Result: "<<a*b;
    }
	else if(ch=='/'){
			cout<<"Calculated Result: "<<a/b;
	}
 }
 else{
 	cout<<"Your operator or value is invalid";
 }
}
