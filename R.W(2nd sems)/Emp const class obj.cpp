#include<iostream>
using namespace std;
class Employee{
    int age;
	public:
		Employee(int x=0){
			age=x;
		}
		int  get() const{
			return age;
		}
};
main(){
    const Employee Emp(78);
    Employee Emp1(6);
    cout<<"the value using object Emp: "<<Emp.get();
    cout<<"\nthe value using object Emp1: "<<Emp1.get();
}