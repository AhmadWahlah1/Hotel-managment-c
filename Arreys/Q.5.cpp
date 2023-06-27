#include<iostream>
using namespace std;
main(){
	int a[10],j,c=0;
	for(int i=0;i<=9;i++){
		cout<<"Enter the value at index "<<i<<": ";
		cin>>a[i];
	}
	cout<<"Search any value ";
	cin>>j;
	for(int b=0;b<=9;b++){
	    if(j==a[b]){
			cout<<j<<" value found at index: "<<b<<endl;
			c++;
	}
  }
  cout<<c<<" :times repeated"<<endl;
}