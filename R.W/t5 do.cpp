#include<iostream>
using namespace std;
main(){
    int a,b,c;
	cout<<"Enter starting value: ";
	cin>>a;
	cout<<"Enter last point: ";
	cin>>b;
	a++;
	do{
		if(a%2==0){
			cout<<a<<endl;
		}
		a++;
	}while(a<b);
}