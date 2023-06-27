#include<iostream>
using namespace std;
main(){
	int a,evn=0,od=0;
	a=1;
	do{
		if(a%2==0){
			cout<<"\t"<<a;
			evn=evn+a;
		}
		else{
			cout<<"\n"<<a;
			od=od+a;
		}
		a++;
	}while(a<=10);
	cout<<"\nSum of even: "<<evn;
	cout<<"\nSum of odd: "<<od;
}