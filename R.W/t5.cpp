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
		if(a%2==0){
			cout<<a<<endl;
		}
		a++;
	}
}