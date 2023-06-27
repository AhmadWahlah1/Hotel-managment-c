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
int main(){
    A a1;
    a1.showt();
  //  a1.show();
    return 0;
}