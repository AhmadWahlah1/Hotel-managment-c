#include<iostream>
#include<list>
using namespace std;
void showg(list<int>g){
	list<int>::iterator it;
	for(it = g.begin();it!= g.end();++it){
		cout<<"\t"<<*it;
	//	cout<<"\n";
	}
}
main(){
	list<int>glist1;
	list<int>glist2;
	for(int i=0;i<10;i++){
		glist1.push_back(i*2);
		glist2.push_front(i*3);
	}
	cout<<"list1 show:";
	showg(glist1);
	cout<<"\nlist2 s:";
	showg(glist2);
	glist1.pop_front();
	cout<<"\nlist1 s aft pop frt:";
	showg(glist1);
	glist2.pop_back();
	cout<<"\nlist2 s aft pop back:";
	showg(glist2);
	glist1.reverse();
	cout<<"\nlist1 reverse:";
	showg(glist1);
	cout<<"\nlist2 sort:";
	glist2.sort();
	showg(glist2);
	cout<<"\nlist1 s:";
	showg(glist1);
	cout<<"\nlist2 s:";
	showg(glist2);
	
	
}