#include<iostream>
using namespace std;
struct persan{
	char n[20],h[20],d[20],p[20];
	int age,roll;
};
main(){
	persan p1;
	//input
	cout<<"Enter your full name: ";
	cin>>p1.n>>p1.d;
	cout<<"Enter your Department: ";
	cin>>p1.h>>p1.p;
	p1.roll=45;
	//output
	cout<<"NAME: "<<p1.n<<" "<<p1.d<<endl;
	cout<<"Job: "<<p1.h<<" "<<p1.p<<endl;
	cout<<"Roll no: "<<p1.roll;
}