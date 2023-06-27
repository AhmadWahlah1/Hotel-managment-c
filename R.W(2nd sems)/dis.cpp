using namespace std;
#include<iostream>
//passing objects as argument in the class
/*
constructor
overloading 
destructor
defining function outside the class
default copy constructor
*/ 
class Distance{
	int feet;
	int inches;
	
	public:
		Distance():feet(0),inches(0)
		{}
		
		
		Distance(int x, int y){
		feet=x;
		inches=y;
	}
	void get_dist(){
		cout<<"Feet"<<feet;
		cout<<"\nInches:"<<inches;
	}
	
};
main(){
	Distance d4;
	Distance d1(2,9);
	Distance d2=d1;
	Distance d3(d1);
	d3.get_dist();
}