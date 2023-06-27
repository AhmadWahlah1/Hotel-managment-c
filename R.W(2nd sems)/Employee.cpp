using namespace std;
#include<iostream>
class Employee{
	char Name[50];
	int Age;
	int Salary;
	char Designation[50];
	public:
		void set(){
			cout<<"Enter name: ";
			cin>>Name;
			cout<<"Enter Age: ";
			cin>>Age;
			cout<<"Enter Salary: ";
			cin>>Salary;
			cout<<"Enter Desingnation: ";
			cin>>Designation;
		}
		void get(){
			cout<<"\nEmployee Name: "<<Name;
			cout<<"\nEmployee Age: "<<Age;
			cout<<"\nEmployee Salary: "<<Salary;
			cout<<"\nEmployee Designation: "<<Designation;
		}
};
main(){
	Employee Emp[100];

	for(int i=0;i<=100;i++){
		cout<<"\nInformation of Employee "<<i+1<<": \n";
		Emp[i].set();
		Emp[i].get();
	}
	
}