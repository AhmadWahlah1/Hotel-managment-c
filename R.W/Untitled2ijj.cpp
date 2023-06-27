#include<iostream>
using namespace std;
main(){
	int a;
	for(a=0;a<=5;a++){
		for(int b=0;b<a;b++){
			cout<<" ";
		}
		for(int c=a;c<5;c++){
			cout<<"*";
		}	
		cout<<endl;
	}
} 