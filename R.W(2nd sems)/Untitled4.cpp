#include<iostream>
using namespace std;
class A{
	private:
	int feet;
	int inches;
	int sum;
	public:
	void set(int x,int y){
		feet=x;
		x=x+y;
		inches=y;
		sum=x;
	}
	void get(){
	cout<<"\nFeet= "<<feet;
	cout<<"\nInches= "<<inches;
	cout<<"\nSum= "<<sum;
	}
};
main(){
	A d1,d2;
	d1.set(8,9);
	d1.get();
	d2.set(5,8);
	d2.get();
}