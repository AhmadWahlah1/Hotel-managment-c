#include<iostream>
#include<deque>
using namespace std;
void showg(deque<int>g){
	deque<int>::iterator it;
	for(it = g.begin();it!= g.end();++it){
		cout<<"\t"<<*it;
		cout<<"\n";
	}
}
int main(){
	deque<int>gquiz;
	gquiz.push_back(20);
	gquiz.push_front(40);
	gquiz.push_front(70);

	gquiz.push_back(30);
	gquiz.push_back(35);
	cout<<"the deque gquiz is:\n";
	showg(gquiz);
	cout<<"\ngquiz.pop_back(): ";
	gquiz.pop_back();
	showg(gquiz);

	cout<<"\ngquiz.at(2): "<<gquiz.at(2);
	cout<<"\ngquiz.front(): "<<gquiz.front()<<"/"<<gquiz.back();
//	cout<<"\ngquiz.back(): "<<gquiz.back();
	cout<<"\ngquiz.size(): "<<gquiz.size();

}