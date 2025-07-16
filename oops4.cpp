#include<iostream>
using namespace std;

  class Hero {

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

    // First Shivi;
    
    // //use get -->>
    // cout<<"Shivi Health is: "<<Shivi.getHealth()<<endl;

    // // use set -->>
    // Shivi.setHealth(70);
    // Shivi.level = 'A';
    // cout<<"My health is: "<<Shivi.getHealth()<<endl;
    // cout<<"My level is: "<<Shivi.level<<endl;


    // static allocation -->>
    Hero a;

    a.setLevel('A');
    a.setHealth(70);
    cout<<"Level is : "<<a.level<<endl;
    cout<<"Health is : "<<a.getHealth()<<endl;

    //Dynamic allocation -->>
    Hero *h = new Hero;
    h->setLevel('C');
    h->setHealth(60);
    //1.)  1st way to access data member using dereference -->>
    // cout<<"Level is : "<<(*h).level<<endl;
    // cout<<"Health is : "<<(*h).getHealth()<<endl;
    
    //1.)  2nd way to access data member using dereference -->>
    cout<<"Level is : "<<h->level<<endl;
    cout<<"Health is : "<<h->getHealth()<<endl;
    return 0;
}