#include<iostream>
using namespace std;
class smallobj{
	private:
		int somedata;
		public:
			void Set_data(){
				cout<<"Enter value: ";
				cin>>somedata;
			}
			void Get_data(){
				cout<<"Somedata: "<<somedata;
			}
};
main(){
	smallobj ob1,ob2;
	ob1.Set_data();
	ob1.Get_data();
	ob2.Set_data();
	ob2.Get_data();
}