#include<iostream>
using namespace std;
main(){//decleration
	void cube(int);
	int a;
	cout<<"Enter any number: ";
	cin>>a;
	cube(a);//calling
}
void cube(int v){//defination
	cout<<"\nCube of "<<v<<" is : "<<v*v*v;
}