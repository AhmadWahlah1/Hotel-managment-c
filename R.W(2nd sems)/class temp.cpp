#include<iostream>
using namespace std;
template<class T,class x,class y>
class classname{
	private:
		T a;
		x b;
		y c;
	public:
		T func(T q ,x f,y g){
		a=q;
		b=f;
		c=g;	
		cout<<"1: "<<q;
		cout<<"\n2: "<<f;
		cout<<"\n3: "<<g;	
		}

};
int main(){
//	float result;
    //T.func(1,3,5);
  //  classname q;
	classname<int,int,int>cln;
	cln.func(6,23,4);
	//add<char,char>('z','a');
//	add<char,int>('z',4);
//	cout<<result<<endl;

//	double r;
//	r=add<double>(2.3,4.5);
//	cout<<r;
}