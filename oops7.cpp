//SHALLOW AND DEEP COPY :)

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


  };

  int main(){

    //   Hero shivi(60, 'B');
    //   shivi.print();
    // //   shivi.setHealth(60);  // or we can write like this Hero shivi(60,'B');
    // //   shivi.setLevel('B');

    // //For Copy -->> we can create another object :)
    // Hero shivangi(shivi);   // shivi.health = shivangi.health;  OR shivi.level = shivangi.level;
    // shivangi.print();
    

    // FOR SHALLOW OR DEEP COPY IN CONSTRUCTOR -->>
    Hero shivi1;
    shivi1.setHealth(20);
    shivi1.setLevel('A');
    char name[8] = "Shivi";
    shivi1.setName(name);
                           
    shivi1.print();
    

    // Use Default Copy Constructor -->>
    
    // they both are same :)
    Hero shivi2(shivi1);
    shivi2.print();
    // Hero shivi2 = shivi1;


    //name change 
    shivi1.name[0] = 'P';
    shivi1.print();
    shivi2.print();














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