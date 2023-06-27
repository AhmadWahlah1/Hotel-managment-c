using namespace std;
#include<iostream>
#include<fstream>
main(){
	cout<<"this is file handling:\n";
	string text,text1;
	  ifstream yourfile("page 1.txt");
	  while(getline(yourfile,text)){
	  	cout<<text<<endl;
	  } 
	  yourfile.close();
	  ifstream myfile("p2.text");
	  while(getline(myfile,text1)){
	  	cout<<text1<<endl;
	  	
	  }
	  myfile.close();
}
