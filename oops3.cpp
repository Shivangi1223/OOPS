// How to access properties -->>  using (".") operator 

/*So basically there are three types of Access modifiers :- 
1.)Public
2.) Private
3.)Protected
*/


#include<iostream>
using namespace std;

    class Shivi{
    public:
    int health = 55;
    char level = 'A';
     };

int main(){
    
    Shivi shivangi;
    cout<<"size is: "<<shivangi.health<<endl;
    cout<<"size is: "<<shivangi.level<<endl;

    return 0;
}