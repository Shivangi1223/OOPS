// How to access properties -->>  using (".") operator 

/*So basically there are three types of Access modifiers :- 
1.)Public
2.) Private
3.)Protected
*/


// 1. Public Access Modifier -->>

// #include<iostream>
// using namespace std;

//     class Shivi{
//     public:
//     int health = 55;
//     char level = 'A';
//      };

// int main(){
    
//     Shivi shivangi;
//     cout<<"health is: "<<shivangi.health<<endl;
//     cout<<"level is: "<<shivangi.level<<endl;

//     return 0;
// }


// 2. Private Access Modifier -->>
//"If a class has some private members, we use getter and setter methods to access them from outside the class."

#include<iostream>
using namespace std;

  class First {

    private:
    int health;

    public:
    char level;

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

    First Shivi;
    
    //use get -->>
    cout<<"Shivi Health is: "<<Shivi.getHealth()<<endl;

    // use set -->>
    Shivi.setHealth(70);
    Shivi.level = 'A';
    cout<<"My health is: "<<Shivi.getHealth()<<endl;
    cout<<"My level is: "<<Shivi.level<<endl;


    return 0;
}