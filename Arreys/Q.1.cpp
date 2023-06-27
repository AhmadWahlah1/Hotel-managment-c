#include<iostream>
using namespace std;
main(){
	int a[10];
	for(int i=0;i<=9;i++){
		cout<<"Enter value at index "<<i<<": ";
		cin>>a[i];
	}
	for(int j=0;j<=9;j++){
		if(a[j]%2==0){
			cout<<"\nValue of index "<<j<<":"<<a[j];
		}
	}
}