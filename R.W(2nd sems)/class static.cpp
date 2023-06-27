#include<iostream>
using namespace std;
class A{
    static int total;
    int id;
public:
    A(){
        total++;
        id=total;
    }
public:
    static void showt(){
        cout<<"Total: "<<total;
    }
    void show(){
        cout<<"Id: "<<id;
    }
};
int A::total=0; //Initialize static member variable
int main(){
    A a1,a2;
    a1.showt();
    a1.show();
    a2.showt();
    a2.show();
    return 0;
}