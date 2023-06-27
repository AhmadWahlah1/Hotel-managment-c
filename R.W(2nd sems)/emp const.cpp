#include<iostream>
using namespace std;
class Employee{
    const int age;
    char name[50];
	public:
	   Employee():age(4){
			
		}
		void set(int x){
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Name: "<<name;
			cout<<"\nage: "<<age;
		}
};
main(){
    Employee Emp;
    Emp.set(45);
}