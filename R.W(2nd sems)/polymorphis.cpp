#include<iostream>
using namespace std;
class dist2;
class dist3;
class dist1{
	int *f,*i;
	public:
	void d1(){
		*f=2;
		*i=3;
	}
	
	friend dist3 frifunction(dist1*,dist2*,dist3*);

};
class dist2{
	int *f,*i;
	public:
    void d1(){
		*f=2;
		*i=3;
	}

	friend dist3 frifunction(dist1*,dist2*,dist3*);

};
class dist3{
	int *f,*i;
	public:
	void d1(){
		*f=2;
		*i=3;
	}
	
	friend dist3 frifunction(dist1*,dist2*,dist3*);

};
 dist3 frifunction(dist1 *a,dist2 *b,dist3 *c){

//	dist3 *temp;
   	a.f=*a.f+*b.f+*c.f;
//	temp.i=*a.i+*b.i+*c.i;
//	return temp;
}
main(){
	dist3 t;
	dist1 l1;
	dist2 l2;
	dist3 l3;
	l1.d1();
    l2.d1();
    l3.d1();
    t=frifunction(&l1,&l2,&l3);
//	dist3* t = new dist3(frifunction(&l1,&l2,&l3));
	cout<<"Total Distance: "<<t.f<<" feets "<<t.i<<" inches";
}