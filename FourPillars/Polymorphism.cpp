// When a single thing existing in multiple forms , then we call it polymorphism :)
//1.) Function overloading -->> 
// If i achieve function overloading, then i have change a little in the function signature >   1.) Either i will add a variable string name 
// #include<iostream>
// using namespace std;

// class A {
//     public:
//     void one(){
//         cout<<"Hello"<<endl;
//     }
//     int one(string name, int n){     // overloading -->>>    if i do function overloading then i have to do change in input arguments, Either the number of arguments or the type
//         cout<<"Hello"<< name <<endl;
//         return n;
//     }
//     void one(string name){
//         cout<<"Hello"<< name <<endl;
//     }
// };

// int main(){

//     A obj;
//     obj.one();
//     return 0;
// }.



// 2.) Operator overloading -->>

// #include<iostream>
// using namespace std;

// class A {
//     public:
//     void one(){
//         cout<<"Hello"<<endl;
//     }
//     int one(string name, int n){     // overloading -->>>    if i do function overloading then i have to do change in input arguments, Either the number of arguments or the type
//         cout<<"Hello"<< name <<endl;
//         return n;
//     }
//     void one(string name){
//         cout<<"Hello"<< name <<endl;
//     }
// };

// class B{
//     public:
//     int a;
//     int b;

//     public:
//     int add(){
//         return a+b;
//     }

//     void operator+ (B &obj){
//         /*int value1 = this -> a;
//         int value2 = obj.a;
//         cout<<"output" << value2 - value1 << endl;  */

//         cout<<"Hello Shivi!"<<endl;
//     }


//     void operator () (){
//         cout<<"Hey!"<< this->a <<endl;
//     }
// };

// int main(){

//     B obj1, obj2;
//     obj1.a = 4;
//     obj2.a = 7;

//     obj1 + obj2;
//     obj1();
//     return 0;
// }


// RUN TIME POLYMORPHISM -->> OR <<-- DYNAMIC POLYMORPHISM -->>
#include<iostream>
using namespace std;

class A {
    public:
    void one(){
        cout<<"Hello"<<endl;
    }
    int one(string name, int n){     // overloading -->>>    if i do function overloading then i have to do change in input arguments, Either the number of arguments or the type
        cout<<"Hello"<< name <<endl;
        return n;
    }
    void one(string name){
        cout<<"Hello"<< name <<endl;
    }
};

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        /*int value1 = this -> a;
        int value2 = obj.a;
        cout<<"output" << value2 - value1 << endl;  */

        cout<<"Hello Shivi!"<<endl;
    }


    void operator () (){
        cout<<"Hey!"<< this->a <<endl;
    }
};



class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

};

class Dog : public Animal{
     public:
     void speak(){
        cout<<"barking"<<endl;
     }
};

int main(){


    Dog obj;
    obj.speak();

    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;
    // obj1();
    return 0;
}