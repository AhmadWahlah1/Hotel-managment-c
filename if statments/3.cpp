#include<iostream>
using namespace std;
main(){
	float t,slry,scl;
	cout<<"Enter salary : ";
	cin>>slry;
	cout<<"Enter scale : ";
	cin>>scl;
	if(scl>16){
		t=slry*40/100;
		slry=slry+t;
		cout<<"Total net pay: "<<t;
	}
	else if(scl<16){
		t=slry*50/100;
		slry=slry+t;
		cout<<"Total net pay: "<<t;
	}
}
