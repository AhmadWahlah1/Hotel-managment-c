#include<iostream>
using namespace std;
main(){
	char ch;
	cout<<"Enter any character: ";
	cin>>ch;
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='U'||ch=='u'){
		cout<<"Your character '"<<ch<<"' is vowel";
	}
	else{
		cout<<"Your character '"<<ch<<"' is consonat";
	}
}
