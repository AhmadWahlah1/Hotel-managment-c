#include<iostream>
using namespace std;
main(){
	int a[10],min=a[0];
	for(int i=0;i<=9;i++){
		cout<<"Enter the value at index "<<i<<": ";
		cin>>a[i];
	}
	for(int j=1;j<=9;j++){
		if(min<a[j]){
			min=a[j];
		}
	}
	cout<<"minimum value is: "<<min;
}