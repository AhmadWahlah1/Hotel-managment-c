#include<iostream>
#include<vector>
using namespace std;
main(){
	vector<int>v;
	cout<<"vec size: "<<v.size();
	for(int i=0;i<=5;i++){
		v.push_back(i);
	}

	vector<int>::iterator it=v.begin();
	while(it!=v.end()){
	
		cout<<"vec: "<<*it<<endl;
		it++;
	}
}