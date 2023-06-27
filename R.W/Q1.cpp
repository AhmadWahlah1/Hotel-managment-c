#include<iostream>
using namespace std;
main(){//decleration
	void table(int);
	int a;
	cout<<"Enter table number: ";
	cin>>a;
	table(a);//calling
}
void table(int v){//defination
	cout<<"\nTABLE:-\n";
	for(int b=1;b<=10;b++){
		cout<<v<<" * "<<b<<" = "<<v*b<<"\n";
	}
}