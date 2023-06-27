#include<iostream>
using namespace std;
main(){
	int a;
	a=2;
	cout<<"NO\tSquare\tCube\n";
	while(a<=7){
		cout<<a<<"\t"<<a*a<<"\t"<<a*a*a<<"\t\n";
		a++;
	}
}