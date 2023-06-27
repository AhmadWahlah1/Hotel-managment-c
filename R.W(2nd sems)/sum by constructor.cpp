using namespace std;
#include<iostream>
class A{
	int a;
	int b;
	int c;
	int Ans;
	public:
		A(int x,int y,int z){
			a=x;
			b=y;
			c=z;
			Ans=a+b+c;
			cout<<"\nThree integer sum: "<<Ans;
		}
		A(int x,int y){
			a=x;
			b=y;
			Ans=a+b;
			cout<<"\nTwo integer sum: "<<Ans;
	    }
};
main(){
	A a(6,8,7),b(5,8);
}