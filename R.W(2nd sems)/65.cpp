#include<iostream>
using namespace std;
class dist{
	private:
		int c=1;
		int feet;
		float inches;
		public:
			void Set_data(){
				int z=0;
				c=z++;
				cout<<"Enter feet: ";
				cin>>feet;
				cout<<"Enter inches: ";
				cin>>inches;
			}
			void Get_data(){
				cout<<"\ndist "<<c<<"="<<feet<<"'-"<<inches<<"\"";
       		}
	        
};
main(){
	dist ob1,ob2,ob3;
	ob1.Set_data();
	ob2.Set_data();
	ob1.Get_data();
	ob2.Get_data();
	ob3.Set_data();
	ob3.Get_data();
}