#include <iostream>
using namespace std;

int main() {
    int t1=1,t2=1,nt=0,n;
    cout<<"Fibonacci Series: "<<t1<<"\t"<<t2<<"\t ";
    nt=t1+t2;
    for(int n=100;nt<=n;t1=t2,t2=nt,nt=t1+t2){
        cout <<nt<<"\t";
    }
}