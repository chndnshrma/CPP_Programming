#include <iostream>
using namespace std;

class A{
    public:
    void show(){
        cout<<"Hello \n";
    }
};
class B : public A{
    public:
    void show(){
        cout<<"CSE \n";
    }
};
class C : public B{
    public:
    void display(){
        cout<<"DS \n";
    }
};
int main(){
    C obj;
    obj.A::show();
    obj.B::show();
    obj.display();

    return 0;
}