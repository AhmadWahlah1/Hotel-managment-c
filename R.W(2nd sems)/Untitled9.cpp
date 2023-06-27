#include<iostream>
using namespace std;
class dist{
	private:
	int feet;
	int inches;
	public:
		void set_dist(int x, int y){
		feet=x;
		inches=y;
	}
	void get_dist(){
		cout<<"\nFeet"<<feet;
		cout<<"\nInches:"<<inches;
	}
	dist sum(dist,dist);
	
};
dist dist::sum(dist x,dist y){
	//int f,i;
	dist t;
	t.feet=x.feet+y.feet;
	t.inches=x.inches+y.inches;
    return t;
}
main(){
	dist d1,d2,d3;
	d1.set_dist(2,5);
	d2.set_dist(4,7);

	d3=d1.sum(d1,d2);
	
	d3.get_dist();
	
}