#include<iostream>
using namespace std;
main(){
	int inches,feet;
	float c,cm;
	cout<<"Enter length as feet a = ";
	cin>>feet;
	cout<<"Enter length as inches b = ";
	cin>>inches;
	cm=feet*30.48;
	cout<<"Total no. of centimeters in feet a = "<<cm<<endl;
	c=inches*2.54;
	cout<<"Total no. of centimeters in inches b = "<<c;
}
