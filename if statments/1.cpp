#include<iostream>
using namespace std;
main(){
	float a,b,c;
	cout<<"Enter 1st float value: ";
	cin>>a;
	cout<<"Enter 2nd float value: ";
	cin>>b;
	cout<<"Enter 3rd float value: ";
	cin>>c;
	if(a>b&&a>c){
			cout<<a<<" is greater then "<<b<<" & "<<c;
	}
	if(b>a&&b>c){
			cout<<b<<" is grater then "<<a<<" & "<<c;
	}
	if(c>a&&c>b){
		    cout<<c<<" is grater then "<<a<<" & "<<b;
	}
}
