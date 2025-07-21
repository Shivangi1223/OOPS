#include<iostream>
using namespace std;

  class Hero {

    private:
    int health;

    public:
    char level;
      
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    // Constructor -->>
    Hero(int health){ 
        cout<<"this -> " << this <<endl;        // WITH PARAMETER's -->>
        this -> health = health;    // this keyword is use to access the class variable or store current address of object
    }
    

    //Another way to create the constructor in cpp -->>
     Hero(int health, char level){ 
       // WITH PARAMETER's -->>
        this -> health = health; 
        this -> level = level;   // this keyword is use to access the class variable or store current address of object
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
      Hero ramesh(20);
    //   cout<<"Address of ramesh : "<< &ramesh<<endl;
    //   ramesh.getHealth();

    ramesh.print();


      //dynamically -->
      Hero *h = new Hero(11);
      h -> print();

      Hero temp (20, 'A');
      temp.print();

    return 0;
  }