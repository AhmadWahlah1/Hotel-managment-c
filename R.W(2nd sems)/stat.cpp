#include<iostream>
using namespace std;
class stati{
	public:
		static void func(){
			cout<<"Hi I am abstract Function";
		}
};
main(){
	stati::func();
//	a.func();
}