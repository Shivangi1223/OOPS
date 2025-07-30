#include<iostream>
using namespace std;

class A {
public:
    void shivi() {
        cout << "Hii" << endl;
    }
};

class B {
public:
    void shivi() {
        cout << "Hello" << endl;
    }
};


class C : public A, public B {

};

int main() {
   C obj;
   obj.A :: shivi();
   obj.B :: shivi();

    return 0;
}
