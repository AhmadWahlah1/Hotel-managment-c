#include<iostream>
using namespace std;
class A{
	public:
	virtual void show(){
		cout<<"base";
	}
};
class B:public A{
	public:
		void show(){
			cout<<"derived";
		}
};
main(){
	B S;
	B *b;
	b=&S;
	b->show();
	
}