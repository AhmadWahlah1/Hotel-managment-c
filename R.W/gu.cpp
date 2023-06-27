#include<iostream>
using namespace std;
struct persan{
	char n[20],h[20];
	float city;
};
main(){
	persan p1;
	//input
	cout<<"Enter your full name: ";
	cin.getline(p1.n,20);
	cout<<"Enter your addrees: ";
	cin.getline(p1.h,20);
	p1.city=87079;
	//output
	cout<<"NAME: "<<p1.n<<endl;
	cout<<"Addrees: "<<p1.h<<endl;
	cout<<"ctiNo: "<<p1.city;
}