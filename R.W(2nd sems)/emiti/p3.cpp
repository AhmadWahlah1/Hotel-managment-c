#include<iostream>
#include<fstream>
using namespace std;
main(){
	string text;
	ifstream myfile("page 1.txt");
	while(getline(myfile,text)){
		cout<<text;
	}
	myfile.close();
}