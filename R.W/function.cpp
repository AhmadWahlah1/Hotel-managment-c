#include<iostream>
using namespace std;
struct info{
	char a[20];
	int sub[3];
	int T[6];
};
int main(){
	info s[6],t[6];
	//input
	for(int i=1;i<=5;i++){
		cout<<"\nEnter ROLL no."<<i<<" student name: ";
		cin.getline(s[i].a,30);
		t[i].T[i]=0;
		for(int c=1;c<=3;c++){
			cout<<"Enter SUB no."<<c<<" marks: ";
			cin>>s[c].sub[i];
        	t[i].T[i]=t[i].T[i]+s[c].sub[i];
		}
		cout<<"TOTAL MARKS: "<<t[i].T[i];
	}
	//output
	for(int g=1;g<=5;g++){
	    cout<<"\nStudent name: "<<s[g].a;
	    for(int b=1;b<=3;b++){
		cout<<"\nSub no. "<<b<<": "<<s[b].sub[g];
		}
		cout<<"\nTotal marks: "<<t[g].T[g];
	}
			
}