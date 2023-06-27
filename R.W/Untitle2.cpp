#include<iostream>
using namespace std;
struct persan{
	char n[20],h[20];
	float slry;
};
main(){
	persan p1;
	//input
	cout<<"Enter your full name: ";
	cin.getline(p1.n,20);
	cout<<"what your job: ";
	cin.getline(p1.h,20);
	p1.slry=87000;
	//output
	cout<<"NAME: "<<p1.n<<endl;
	cout<<"Job: "<<p1.h<<endl;
	cout<<"Salary:Rs. "<<p1.slry;
}