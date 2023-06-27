#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
void show(map<int,int>g){
	map<int,int>:: iterator it ;
	for( it =g.begin();it!=g.end();it++){
	cout<<it->first<<" "<<it->second<<" ";
}
}
main(){
	map<int,int>m;
	m.insert(pair<int,int>(20,70));
	m.insert(pair<int,int>(30,33));
	m.insert(pair<int,int>(40,34));
	m.insert(pair<int,int>(50,56));
	m.insert(pair<int,int>(60,40));
	show(m);

}