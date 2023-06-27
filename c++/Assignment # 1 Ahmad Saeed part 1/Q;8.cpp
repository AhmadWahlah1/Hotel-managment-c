#include<iostream>
using namespace std;
main(){
	int days,y,m;
	cout<<" Enter no. of days:";
	cin>>days;
	y=days/365;
	days=days%365;
	m=days/30;
	days=days%30;
	cout<<" Years: "<<y<<"\n Months: "<<m<<"\n Days: "<<days;
}
