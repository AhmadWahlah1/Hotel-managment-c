#include<iostream>
using namespace std;
main(){
	int b;
	cout<<"Enter length of array: ";
	cin>>b;
	int Arr[b];
	void arr(int[],int);
	arr(Arr,b);
}
void arr(int x[],int a){
	for(int i=0;i<=a;i++){
		cout<<"At index "<<i<<" = ";
		cin>>x[i];
	}
}