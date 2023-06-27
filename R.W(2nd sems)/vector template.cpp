#include<iostream>
#include<vector>
using namespace std;
main(){
	vector<int>v;
	cout<<"vec size: "<<v.size();
	for(int i=0;i<=5;i++){
		v.push_back(i);
	}
	cout<<"\nvector size: "<<v.size()<<endl;
	for(int i =0; i<=5; i++){
		cout<<"vector: "<<i<<"="<<v[i]<<endl;
	}
	//int *it;
	vector<int>::iterator it=v.begin();
	while(it!=v.end()){
		cout<<"\nvec: "<<*it<<endl;
		it++;
	}
}