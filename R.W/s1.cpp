#include<iostream>
using namespace std;
struct persan{
	char n[20],h[20];
	float GPA;
};
main(){
	persan p1;
	//input
	cout<<"Enter your name: ";
	cin.getline(p1.n,20);
	p1.GPA=3.8;
	//output
	cout<<"NAME: "<<p1.n<<endl;
	cout<<"GPA: "<<p1.GPA;
}