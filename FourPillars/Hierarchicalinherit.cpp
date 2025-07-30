#include<iostream>
using namespace std;

class A {
      public:
      void one(){
        cout<<"Inside one"<<endl;
      }
};

class B : public A {
       public:
      void two(){
        cout<<"Inside two"<<endl;
      }
};

class C : public A {
    public:
      void three(){
        cout<<"Inside three"<<endl;
      }
};


int main(){

    A object1;
    object1.one();

    B object2;
    object1.one();
    object2.two();

    C object3;
    object3.one();
    // object3.two();
    object3.three();

    return 0;
}