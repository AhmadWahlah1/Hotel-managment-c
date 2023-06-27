#include<iostream>
using namespace std;
 class A{
	public:
		virtual void show()=0;
};
class B:public A{
	public:
		void show(){
			cout<<"derived";
		}
};
main(){
	A a1;
	B b1;
	A *p;
	p=&a1;
	p->show();
	p=&b1;
	p->show();
}