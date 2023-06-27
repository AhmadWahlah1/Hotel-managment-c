#include<iostream>
using namespace std;
class dist{
	private:
		int a;
		int f;
	public:
		void set(int x,int y){
			a=x;
			f=y;
		}
		void get(){
			cout<<a<<endl;
			cout<<f<<endl;
		}
		dist sum(dist,dist);
};
dist dist::sum(dist x,dist y){
	dist t;
	t.a=x.a+y.a;
	t.f=x.f+y.f;
	return  t;
}
main(){
	dist d1,d2,d3;
	d1.set(2,4);
	d2.set(4,6);
	d3=d1.sum(d1,d2);
	d3.get();
}