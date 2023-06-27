#include<iostream>
using namespace std;
class Employee{
    int age=9;
	public:
		void get()const{
			cout<<"\nAge: "<<age;
		}
};
main(){
    Employee Emp;
    Emp.get();
}