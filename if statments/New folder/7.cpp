#include<iostream>
using namespace std;
main(){
	int crdg,prdg,unit;
	double cost;
	cout<<"Enter current reding: ";
	cin>>crdg;
	cout<<"Enter pervious reding: ";
	cin>>prdg;
	unit=crdg-prdg;
	cout<<"Total unit: "<<unit;
	if(unit<=300){
		cost=unit*3;
		cout<<"\nElectric bill is: "<<cost;
	}
	else if(300<=unit<=400){
		cost=unit*4;
		cout<<"\nElectric bill is: "<<cost;
	}
	else if(unit>=400){
		cost=unit*5;
		cout<<"\nElectric bill is: "<<cost;
	}
}
