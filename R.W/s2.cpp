#include<iostream>
using namespace std;
struct persan{
	char n[20],d[20],h[20],p[20];
	float city;
};
main(){
	persan p1;
	//input
	cout<<"Enter your full name: ";
	cin>>p1.n>>p1.d;
	cout<<"Enter your addrees: ";
	cin>>p1.h>>p1.p;
	p1.city=87079;
	//output
	cout<<"NAME: "<<p1.n<<" "<<p1.d<<endl;
	cout<<"Addrees: "<<p1.h<<" "<<p1.p<<endl;
	cout<<"ctiNo: "<<p1.city;
}