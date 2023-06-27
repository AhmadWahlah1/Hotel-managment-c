
#include<iostream>
using namespace std;

class dist2;
class dist3;
class dist1{
    int f,i;
public:
    void d1(){
        f=2;
        i=3;
    }
    friend class dist3;
    friend dist3 frifunction(dist1*, dist2*, dist3*);
    int get_f() { return f; }
    int get_i() { return i; }
};

class dist2{
    int f,i;
public:
    void d1(){
        f=2;
        i=3;
    }
    friend class dist3;
    friend dist3 frifunction(dist1*, dist2*, dist3*);
    int get_f() { return f; }
    int get_i() { return i; }
};

class dist3{
    int f,i;
public:
    void d1(){
        f=2;
        i=3;
    }
    friend dist3 frifunction(dist1*, dist2*, dist3*);
    int get_f() { return f; }
    int get_i() { return i; }
};

dist3 frifunction(dist1* a, dist2* b, dist3* c){
    dist3 t;
    t.f=a->get_f()+b->get_f()+c->get_f();
    t.i=a->get_i()+b->get_i()+c->get_i();
    return t;
}

int main(){
    dist1 l1;
    dist2 l2;
    dist3 l3;
    l1.d1();
    l2.d1();
    l3.d1();
    dist3* temp = new dist3(frifunction(&l1, &l2, &l3));
    cout<<"Total Distance: "<<temp->get_f()<<" feet "<<temp->get_i()<<" inches"<<endl;
    delete temp;
    return 0;
}