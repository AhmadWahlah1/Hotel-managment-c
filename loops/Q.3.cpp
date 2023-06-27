#include<iostream>
using namespace std;
main(){
	int a,b;
	a=1;
	b=1;
	while(a<=625){
		a=a*b;
		cout<<a<<endl;
		a=5*a;
	}
}