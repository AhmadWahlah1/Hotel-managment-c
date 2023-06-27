#include<iostream>
using namespace std;
class person{
	char name[40];
	int age;
	public:
		void set(){
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
		}
		void get(){
			cout<<"\nName: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
class h{
	int a;
	public:
		void se(){
			
		}
		void ge(){
			cout<<"\nnum: "<<a;
		}
		cout<<"enter any num: ";
		cin>>a;
};
class student:public person,public h{
	char reg[30];
	char degree[70];
	int sems;
	public:
		void s(){
			set();
			cout<<"Enter reg:";
			cin>>reg;
			cout<<"Enter degree:";
			cin>>degree;
			cout<<"Enter semster:";
			cin>>sems;
		}
		void g(){
			get();
			cout<<"Reg:"<<reg;
			cout<<"\nDegree:"<<degree;
			cout<<"\nSemster: "<<sems;
		}
};
main(){
	student s1;
	s1.s();
	s1.g();
}