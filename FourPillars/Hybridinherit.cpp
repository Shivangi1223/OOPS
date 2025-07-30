#include<iostream>
using namespace std;

class A {
public:
    void shivi() {
        cout << "Hii" << endl;
    }
};

class B : virtual public A {
public:
    void shiv() {
        cout << "Hello" << endl;
    }
};

class C : virtual public A {
    // could have its own methods
};

class D : public B, public C {
public:
    void shivangi() {
        cout << "Miss Shivi" << endl;
    }
};

int main() {
    D obj;
    obj.shivi();     
    obj.shiv();      // from B
    obj.shivangi();  // from D
    return 0;
}
