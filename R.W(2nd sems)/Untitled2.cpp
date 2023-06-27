#include<iostream>
using namespace std;
template<typename T,typename f>
add(T NUM1,f NUM2){
	
	
	if(NUM1>NUM2){
			cout<<NUM1<<" is graeater then: "<<NUM2<<endl;
	}
	else {
		cout<<NUM2<<" is greater THEN :"<<NUM1<<endl;
	}
//	return(NUM1);
}
int main(){
//	float result;
	add<char,float>('z',5.5);
	add<char,char>('z','a');
	add<char,int>('z',4);
//	cout<<result<<endl;

//	double r;
//	r=add<double>(2.3,4.5);
//	cout<<r;
}