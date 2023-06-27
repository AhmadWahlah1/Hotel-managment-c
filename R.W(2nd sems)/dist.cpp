using namespace std;
#include<iostream>
//passing objects as argument in the class
/*
constructor
overloading 
destructor
defining function outside the class
*/ 
class Distance{
	int feet;
	int inches;
	
	public:
	void set_dist(int x, int y){
		feet=x;
		inches=y;
	}
	void get_dist(){
		cout<<"Feet"<<feet;
		cout<<"\nInches:"<<inches;
	}
	void sum(Distance,Distance);
	
};
void Distance::sum(Distance x,Distance y){
	int f,i;
	f=x.feet+y.feet;
	i=x.inches+y.inches;
	cout<<"\nsum of two distances:";
	cout<<"\nFeet:"<<f;
	cout<<"\nInches:"<<i;
}
main(){
	Distance d1,d2;
	d1.set_dist(5,9);
	d2.set_dist(6,10);
	d1.get_dist();
	d2.get_dist();
	d1.sum(d1,d2);
}