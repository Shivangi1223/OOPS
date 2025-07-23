// DESTRUCTOR :)

#include<iostream>
#include<cstring>
using namespace std;

  class Hero {

    private:
    int health;

    public:
    char *name;
    char level;
      
    Hero(){
        cout<<"Default or Simple Constructor called"<<endl;
        name = new char[100];
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


    //Copy Constructor -->> YOU CAN CREATE YOUR OWN COPY CONSTRUCTOR AS PER YOUR NEED :)
    Hero(Hero& shivi){    // WHY WE USE (ampersand & symbol) :- "To avoid an infinite loop"  -->>
        

        // Deep Copy -->> 
        char *ch = new char[strlen(shivi.name) + 1];
        strcpy(ch, shivi.name);
        this->name = ch;

        cout<<"Copy Constructor Called"<<endl;
        this->health = shivi.health;
        this->level = shivi.level;
    }

    void print(){
        cout<<endl;
        cout<<"[Name : "<<this->name<<" , ";
        cout<<"health is : "<< this -> health<<" , ";
        cout<<"level is : "<<this -> level <<" ]";
        cout<<endl<<endl;
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

    void setName(char name[]){
        strcpy(this->name, name);
    }

    ~Hero(){
        cout<<"Destructor called : "<<endl;
    }


  };

  int main(){

    // DESTRUCTOR -->> FOR MEMORY DEALLOCATION :)

    // STATICALLY 

    Hero a;


    // DYNAMICALLY 
    Hero *b = new Hero();
    //manually destructor called -->
    delete b;
        
    return 0;
  }