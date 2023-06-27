#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
void show(multiset<int>g){
	   // multiset<int>g;
		for(auto it =g.begin();it!=g.end();it++)
		cout<<*it<<" ";
}
main(){
	multiset<int>s;
	multiset<int>s1;
	//FUNCTION TO INSERT ELEMENTS
	//IN A SET  CONTAINER
	s.insert(50);
	s.insert(70);
	s.insert(4);
	s.insert(2);
	s.insert(70);
	s.insert(4);
    cout<<"s1: ";
	show(s);
	cout<<"\n";
	multiset<int>s2(s.begin(),s.end());
	cout<<"s2:";
	show(s2);
	cout<<"\n";
	
	s2.erase(s2.find(50),s2.end());
	cout<<"After deletion s2: ";
	show(s2);
 // s.erase(3);

}
//set<int>:iterator it;
//for(it=s.begin(); it!.....