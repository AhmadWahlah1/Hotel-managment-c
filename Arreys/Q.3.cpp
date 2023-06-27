#include<iostream>
using namespace std;
main(){
	int a[10],max=a[0];
	for(int i=0;i<=9;i++){
		cout<<"Enter the value at index "<<i<<": ";
		cin>>a[i];
	}
	for(int j=0;j<=9;j++){
		if(a[j]>max){
			max=a[j];
		}
	}
	cout<<"maximum value is: "<<max;
}