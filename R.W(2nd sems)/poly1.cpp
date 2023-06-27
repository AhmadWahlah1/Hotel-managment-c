#include<iostream>
using namespace std;
class beta;
class Alpha{
	int data;
	int data1;
	public:
		Alpha(){
			data=3;
			data1=2;
		}
		friend int frifunc(Alpha,beta);
};
class beta{
	int data;
	int data1;
	public:
		beta(){
			data=1;
			data1=5;
		}
		friend int frifunc(Alpha,beta);
};
int frifunc(Alpha a,beta b){
    Alpha t;
	t.data=a.data+b.data;
	t.data1=a.data+b.data;
	return t;
}
main(){
	Alpha a3;
	Alpha a1;
	beta a2;
	a3 = frifunc(a1,a2);
	cout<<"total: "<<a3;
	cout<<"data:  "<<a3.data;
	cout<<"data1: "<<a3.data1;
	
}