#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
void show(map<int,int>g){
	map<int,int>::iterator it;
	cout<<"key\tElement\n";
	for(it= g.begin();it!=g.end();++it){
		cout<<it->first<<"\t"<<it->second<<"\n";
	}
}
main(){
	map<int,int>m;
	m.insert(pair<int,int>(20,70));
	m.insert(pair<int,int>(30,33));
	m.insert(pair<int,int>(40,34));
	m.insert(pair<int,int>(60,56));
	m.insert(pair<int,int>(10,67));
	show(m);
	map<int,int>m1(m1.begin(),m1.end());
	show(m1);
	int temp;
	temp=m.erase(40);
	cout<<" del: "<<temp;
	
	
}