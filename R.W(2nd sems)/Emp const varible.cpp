#include<iostream>
using namespace std;
class Employee{
    const int age=49;
	public:
		void get(int  x){
		//	x=age; //x=49(const)
			cout<<"\nAge: "<<age;
		}
};
main(){
    Employee Emp;
    Emp.get(25);
}