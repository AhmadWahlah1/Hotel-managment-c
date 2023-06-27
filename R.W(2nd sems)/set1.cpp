#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
main(){
	multiset<int>s;
	//FUNCTION TO INSERT ELEMENTS
	//IN A SET  CONTAINER
	s.insert(1);
	s.insert(4);
	s.insert(2);
	s.insert(5);
	s.insert(3);
	s.insert(3);
 // s.erase(3);
	cout<<"The element in set are:  ";
	for(auto it =s.begin();it!=s.end();it++)
		cout<<*it<<" ";
//	}
}
//set<int>:iterator it;
//for(it=s.begin(); it!.....