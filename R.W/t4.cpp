#include<iostream>
using namespace std;
main(){
	int a,b,c;
	cout<<"Enter starting value: ";
	cin>>a;
	cout<<"Enter last point: ";
	cin>>b;
	a++;
	while(a<b){
		cout<<a<<endl;
		c=a+b;
		a++;
	}
	cout<<"Sum of range is: "<<c;
}