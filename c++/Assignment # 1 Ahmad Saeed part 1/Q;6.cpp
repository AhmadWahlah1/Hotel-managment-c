#include<iostream>
using namespace std;
main(){
	int amt,r500,r100,r50,r20,r10,r5,r1;
	cout<<"Enter amount:";
	cin>>amt;
	r500=amt/500;
	amt=amt%500;
	r100=amt/100;
	amt=amt%100;
	r50=amt/50;
	amt=amt%50;
	r20=amt/20;
	amt=amt%20;
	r10=amt/10;
	amt=amt%10;
	r5=amt/5;
	amt=amt%5;
	r1=amt;
	cout<<"Rs.500:"<<r500<<"\nRs.100:"<<r100<<"\nRs.50"<<r50<<"\nRs.20:"<<r20<<"\nRs.10:"<<r10<<"\nRs.5:"<<r5<<"\nRs.1:"<<r1;
}
