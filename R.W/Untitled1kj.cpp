#include<iostream>
using namespace std;
main(){
	int a;
	for(a=1;a<=5;a++){
		for(int b=a;b<=5;b++){
			cout<<" ";
		}
		for(int c=1;c<=a;c++){
			cout<<"*";
		}	
		for(int c=2;c<=a;c++){
			cout<<"*";
		}
		for(int b=a;b<=5;b++){
			cout<<" ";
		}
		cout<<endl;
	}
	for(a=5;a>=1;a--){
		for(int b=a;b<=5;b++){
			cout<<" ";
		}
		for(int c=1;c<=a;c++){
			cout<<"*";
		}	
		for(int c=2;c<=a;c++){
			cout<<"*";
		}
		for(int b=a;b<=5;b++){
			cout<<" ";
		}
		cout<<endl;
	}
} 