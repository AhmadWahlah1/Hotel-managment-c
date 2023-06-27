#include<iostream>
using namespace std;
main(){
	int a[5]={18,10,7,20,2};
	int minindex=0;
	int temp;
	cout<<"\nBefore sorting: ";
	for(int p=0;p<=4;p++){
		cout<<"\t"<<a[p];
	}
	for(int i=0;i<=3;i++){
		for(int j=i+1;j<=4;j++){
			if(a[j]<a[i]){
				minindex=j;
			}
		}
	temp=a[i];
  	a[i]=a[minindex];
	a[minindex]=temp;
	}
	cout<<"\nValues after sorting";
  for(int k=0;k<=4;k++){
  	cout<<"\t"<<a[k];
  }
}