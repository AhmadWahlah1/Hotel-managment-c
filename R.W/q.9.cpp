#include<iostream>//write a program to create three arrays of equal deminsion then add first two arrrays and plays the ans in third array
using namespace std;
main(){
	int a[4]={1,5,7,6},b[4]={2,2,1,3},d[4];
	cout<<"array 1:\n";
	for(int i=0;i<=3;i++){
		cout<<a[i]<<"\t";
		}
		cout<<"\narray 2:\n";
		for(int c=0;c<=3;c++){
			cout<<b[c]<<"\t";
		}
		cout<<"\nSum:\n";
		for(int s=0;s<=3;s++){
			d[s]=a[s]+b[s];
		cout<<d[s]<<"\t";
    	}	
	}

