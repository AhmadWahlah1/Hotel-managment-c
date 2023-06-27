#include<iostream>
using namespace std;
struct addr{
	int houseno,postalcode;
	char street[60],city[50];
};
struct emp{
	char name[20];
	float salary;
	int age;
	addr address;
};
main(){
	emp p1,p2;
	cout<<"Enter your name: ";
	cin>>p1.name;
	cout<<"Enter your salary:Rs. ";
	cin>>p1.salary;
	cout<<"Enter your age: ";
	cin>>p1.age;
	cout<<"Enter your address: ";
	cout<<"\nHouse no:";
	cin>>p1.address.houseno;
	cout<<"Street: ";
	cin>>p1.address.street;
	cout<<"City: ";
	cin>>p1.address.city;
	cout<<"Postal code: ";
	cin>>p1.address.postalcode;
	cout<<"Enter your name: ";
	cin>>p2.name;
	cout<<"Enter your salary:Rs. ";
	cin>>p2.salary;
	cout<<"Enter your age: ";
	cin>>p2.age;
	cout<<"Enter your address: ";
	cout<<"\nHouse no:";
	cin>>p2.address.houseno;
	cout<<"Street: ";
	cin>>p2.address.street;
	cout<<"City: ";
	cin>>p2.address.city;
	cout<<"Postal code: ";
	cin>>p2.address.postalcode;

	cout<<"\nName\t Salary\t Age\t House.No       Street\t City    \t Postalcode\n";
	cout<<p1.name<<"\t "<<p1.salary<<"\t "<<p1.age<<"\t "<<p1.address.houseno<<"\t\t"<<p1.address.street<<"\t "<<p1.address.city<<"\t "<<p1.address.postalcode<<"\n";
  	cout<<p2.name<<"\t "<<p2.salary<<"\t "<<p2.age<<"\t "<<p2.address.houseno<<"\t\t"<<p2.address.street<<"\t "<<p2.address.city<<" \t "<<p2.address.postalcode;
}