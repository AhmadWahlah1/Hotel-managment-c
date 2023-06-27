#include<iostream>
using namespace std;
main(){
	int a[12],b,c=0;
	for(int i=0;i<=11;i++){
		cout<<"Enter value at index "<<i<<": ";
		cin>>a[i];
	}
	cout<<"Enter value you want to search: ";
	cin>>b;
	for(int j=0;j<=11;j++){
		if(b==a[j]){
			c++;
        } 
    }
    cout<<b<<" :Appereared "<<c<<" :times, at following index numbers: \n";
   	for(int j=0;j<=11;j++){
		if(b==a[j]){
			cout<<j<<endl;
        } 
    }
}