#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string text;
	ofstream file("file.txt");
	file<<"file handling";
	file.close();
}