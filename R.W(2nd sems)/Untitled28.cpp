#include<iostream>
using namespace std;
class smallobj{
	private:
		int modelnum;
		int partnum;
		float cost;
		public:
			void Set_data(){
				cout<<"Enter model number: ";
				cin>>modelnum;
				cout<<"Enter part number: ";
				cin>>partnum;
				cout<<"Enter cost number: ";
				cin>>cost;
			}
			void Get_data(){
				cout<<"\nModel number: "<<modelnum;
				cout<<"\nPart number: "<<partnum;
				cout<<"\nCost: "<<cost;
			}
};
main(){
	smallobj ob1,ob2,ob3;
	ob1.Set_data();
	ob2.Set_data();
	ob3.Set_data();
	ob1.Get_data();
	ob2.Get_data();
	ob3.Get_data();
}