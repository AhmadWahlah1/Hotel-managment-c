#include<iostream>
using namespace std;
main(){
	int slry;
	float avrg;
	cout<<"Enter salary: ";
	cin>>slry;
	if(slry>=3000){
		avrg=slry*13/100;
		cout<<"Detect salary: "<<avrg;
	}
	else if(15000<=slry<3000){
		avrg=slry*1500/100;
		cout<<"Detect salary: "<<avrg;
	}
}
