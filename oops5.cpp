#include<iostream>
using namespace std;

  class Hero {

    private:
    int health;

    public:
    char level;

    // Constructor -->>
    Hero(){          // WITHOUT PARAMETER -->>
        cout<<"Constructor called "<<endl;
    }

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){    
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth (int h){
        health = h;
    }

    void setLevel (char ch){
        level = ch;
    }


  };

  int main(){
     
    // Object created stactically -->>
    // cout<<"Shivi"<<endl;
    Hero A;   // Constructor call -->>
    // cout<<"Shivangi"<<endl;

    // Object Dynamically created -->>
    Hero *h = new Hero;  // constructor call dynamically -->>

    return 0;
  }