#include<iostream>
using namespace std;
main(){
	int marks,total;
	float avrg;
	cout<<"Enter student obtained marks: \n";
	cin>>marks;
	cout<<"Enter total marks: ";
	cin>>total;
	avrg=(marks*100)/total;
	cout<<"Percentage of student marks: "<<avrg<<"%\n";
	if(avrg>=80){
		cout<<"Grade is A+";
        } 
   	else if(avrg>=70){
		cout<<"Grade is A";
     	}
   	else if(avrg>=60){
		cout<<"Grade is B";
    	}
   	else if(avrg>=50){
		cout<<"Grade is C";
     	}
   	else if(avrg>=40){
		cout<<"Grade is D";
    	}
	else{
		cout<<"Fail";
     	}
}
