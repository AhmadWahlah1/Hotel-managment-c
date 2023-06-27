#include<iostream>
#include<fstream>
using namespace std;
main(){
	string text;
	ifstream myfile("p1.txt");
	while(getline(myfile,text)){
		cout<<text;
	}
	myfile.close();
	cout<<endl;
	ifstream myfile1("p2.txt");
	while(getline(myfile1,text)){
		cout<<text;
	}
	myfile1.close();
	
}