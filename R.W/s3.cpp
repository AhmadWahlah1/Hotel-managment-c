#include<iostream>
using namespace std;
struct persan{
	char n[20],h[20],d[20],p[20];
	float slry;
};
main(){
	persan p1;
	//input
	cout<<"Enter your full name: ";
	cin>>p1.n>>p1.d;
	cout<<"what your job: ";
	cin>>p1.h>>p1.p;
	p1.slry=87000;
	//output
	cout<<"NAME: "<<p1.n<<" "<<p1.d<<endl;
	cout<<"Job: "<<p1.h<<" "<<p1.p<<endl;
	cout<<"Salary:Rs. "<<p1.slry;
}