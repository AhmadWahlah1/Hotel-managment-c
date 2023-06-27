#include<iostream>
using namespace std;
main(){
	int num,kg;
	cout<<"Enter kg: ";
	cin>>kg;
	cout<<"Select option:\n1.To convert kg to grams\n2.To convert kg to pounds: \n";
	cin>>num;
    switch(num){
	case 1:
	cout<<"kg in gram is: "<<kg*1000;
	break;
	case 2:
	cout<<"kg in pound is: "<<kg*2.2;
	break;
	default:
		cout<<"Invalid";
    }
}

