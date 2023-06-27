using namespace std;
#include<iostream>
#include<fstream>

main(){
	string mytext;
	ifstream myfile1("pract.txt");
	
	while(getline(myfile1,mytext)){
		cout<<mytext;
	}
myfile1.close();	
	
	
	
}