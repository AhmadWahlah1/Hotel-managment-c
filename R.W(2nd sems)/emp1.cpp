#include<iostream>
using namespace std;
class Employee{
    static int age;
	public:
		void set(){
			cout<<"\nEnter age: ";
			cin>>age;
		}
		void get(){
			cout<<"\nAge: "<<age;
		}
};
int Employee::age=0;
main(){
    Employee Emp;
    Emp.set();
	Emp.get();
}
