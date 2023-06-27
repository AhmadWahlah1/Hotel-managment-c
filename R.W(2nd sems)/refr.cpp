#include<iostream>
using namespace std;
class A{
	public:
		void funct(int &x){
			x=5;
		}
};
main(){
	A t;
	int a;
	a=10;
	t.funct(a);
	cout<<a;
}