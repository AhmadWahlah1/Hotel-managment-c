#include<iostream>
using namespace std;
main(){//decleration
	void great();
	great();//calling
}
void great(){//defination
	int a,c;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>c;
	if(a>c){
		cout<<"\n "<<a<<" :is greater then: "<<c;
	}
	else{
		cout<<"\n "<<c<<" :is greater then: "<<a;
	}
}