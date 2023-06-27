#include<iostream>
using namespace std;
struct emp{
	char name[20];
	int id;
};
main(){
	emp p1,p2;
	cout<<"Enter your name: ";
	cin>>p1.name;
	cout<<"Enter your Roll.No: ";
	cin>>p1.id;
	cout<<"Enter your name: ";
	cin>>p2.name;
	cout<<"Enter your Roll.No: ";
	cin>>p2.id;
    cout<<"\n1st person:\nname: "<<p1.name<<"\nRoll No: "<<p1.id<<endl;
    cout<<"\n2st person:\nname: "<<p2.name<<"\nRoll No: "<<p2.id<<endl;
}