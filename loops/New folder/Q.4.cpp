#include<iostream>
using namespace std;
main(){
	int st,ed;
	cout<<"Enter starting number: ";
	cin>>st;
	cout<<"Enter ending number: ";
	cin>>ed;
	cout<<"\nAll even numbers in range are: ";
	st++;
	while(st<ed){
		if(st%2==0){
			cout<<"\n"<<st;
		}
		st++;
	    }
    }