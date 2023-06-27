#include<iostream>
using namespace std;
class Beta;
class Alpha{
	private:
		int a,b;
	public:
		Alphaa(){
			a=2;
			b=2;
			cout<<a<<b;
		}
		friend Alpha func(Alpha,Beta);
};
class Beta{
	private:
		int a,b;
	public:
		Betaa(){
			a=3;
			b=3;
         	cout<<a<<b;

		}
		friend Alpha func(Alpha,Beta);	
};
Alpha func(Alha r,Beta t){
	Alpha temp;
	
	a.Alphaa()=a.Alphaa()+a.Beta();
	b.Alphaa()=b.Betaa()+b.Betaa();
	return temp;
}
main(){
	Alpha a;
	Beta b;
	a.Alphaa();
	b.Betaa();
	
}