#include<iostream>
#include<fstream>
using namespace std;
main(){
    string t;
	ofstream myfile3("p.txt");
	cout<<"enter";
	getline(cin,t);
	myfile3<<t;
	myfile3.close();
}