#include<iostream>
using namespace std;
main(){
	int a[5]={-2,45,0,11,-9},temp;
	cout<<"Values before sorting: ";
	for(int b=0;b<5;b++){
		cout<<"\nValue of index "<<b<<": "<<a[b];
	}
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"\nValues after sorting: ";
	for(int s=0;s<=4;s++){
		cout<<"\nValue of index "<<s<<": "<<a[s];
	}
}