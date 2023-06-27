#include<iostream>
using namespace std;
struct persan{
	char n[20],h[20];
	int age,roll;
};
main(){
	persan p1;
	//input
	cout<<"Enter your full name: ";
	cin.getline(p1.n,20);
	cout<<"Enter your Department: ";
	cin.getline(p1.h,20);
	p1.roll=45;
	//output
	cout<<"NAME: "<<p1.n<<endl;
	cout<<"DEPARTMENT: "<<p1.h<<endl;
	cout<<"Roll no: "<<p1.roll;
}