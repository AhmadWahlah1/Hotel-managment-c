#include<iostream>
using namespace std;
class Employee{
	char Name[50];
    static int c;
	public:
		Employee(){
			c++;
		}
		void set(){
			cout<<"\nEnter Name: ";
			cin>>Name;
		}
		void get(){
			cout<<"\nEmployee Name: "<<Name;
		}
		void total(){
			cout<<"\nTotal obj: "<<c;
		}
};
int Employee::c=0;
main(){
	Employee Emp,Emp1,Emp2;
	Emp.set();
	Emp.get();
	Emp.total();
	Emp1.set();
	Emp1.get();
	Emp1.total();
	Emp2.set();
	Emp2.get();
	Emp2.total();

}
//void get()const{
//	cout<<"Age: "<<age;
//}