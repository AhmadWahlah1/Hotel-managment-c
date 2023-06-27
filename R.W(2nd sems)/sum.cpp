using namespace std;
#include<iostream>
class A{
	int a;
	int b;
	int c;
	int Ans;
	public:
		void set(int x,int y,int z){
			a=x;
			b=y;
			c=z;
			Ans=a+b+c;
		}
		void set(int x,int y){
			a=x;
			b=y;
			Ans=a+b;
		}
		void Result(){
			cout<<"\nSum: "<<Ans;
		}
};
main(){
	A a1,a2;
	a1.set(2,3,4);
	a1.Result();
	a2.set(2,1);
	a2.Result();
}