#include<iostream>
using namespace std;
template<typename T,typename f>
f add(T NUM1,f NUM2){
	
	
	if(NUM1>NUM2){
			cout<<NUM1<<" is graeater then: "<<NUM2<<endl;
		
	}
	else {
		cout<<NUM2<<" is greater THEN :"<<NUM1<<endl;
	}
//	return(NUM1);
}
int main(){
	float result;
	result=add<char,float>('s',5.5);
//	cout<<result<<endl;

	double r;
	r=add<double>(2.3,4.5);
//	cout<<r;
}