#include<iostream>
using namespace std;

  class Hero {

    private:
    int health;

    public:
    char level;
      
    Hero(){
        cout<<"Default or Simple Constructor called"<<endl;
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


    // Copy Constructor -->> YOU CAN CREATE YOUR OWN COPY CONSTRUCTOR AS PER YOUR NEED :)
    Hero(Hero& shivi){    // WHY WE USE (ampersand & symbol) :- "To avoid an infinite loop"  -->>
        cout<<"Copy Constructor Called"<<endl;
        this->health = shivi.health;
        this->level = shivi.level;
    }

    void print(){
        cout<<"health is : "<< this -> health<<endl;
        cout<<"level is : "<<this -> level <<endl;
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

      Hero shivi(60, 'B');
      shivi.print();
    //   shivi.setHealth(60);  // or we can write like this Hero shivi(60,'B');
    //   shivi.setLevel('B');

    //For Copy -->> we can create another object :)
    Hero shivangi(shivi);   // shivi.health = shivangi.health;  OR shivi.level = shivangi.level;
    shivangi.print();
                            













    //   Hero ramesh(20);
    // //   cout<<"Address of ramesh : "<< &ramesh<<endl;
    // //   ramesh.getHealth();

    // ramesh.print();


    //   //dynamically -->
    //   Hero *h = new Hero(11);
    //   h -> print();

    //   Hero temp (20, 'A');
    //   temp.print();

    // return 0;
  }