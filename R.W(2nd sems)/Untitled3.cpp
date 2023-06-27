#include<iostream>
using namespace std;
class A{
	private:
	int ct;
	public:
	A(){
		ct=0;
	}
	void inc(){
	ct++;
	}
	void disp(){
		cout<<ct;
	}
};
main(){
	A c1;
	c1.inc();
	c1.disp();
}