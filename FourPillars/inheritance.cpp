// #include<iostream> 
// using namespace std;

// // FIRST WE WILL CREATE A HUMAN CLASS -->> PARENT CLASS 
// class Human{
//       public:
//       int height;
//       int weight;
//       private:
//       int age;

//       public:
//       int getAge(){
//         return this->age;
//       }
//       void setWeight(int w){
//         this->weight = w;
//       }
// };


// // Public mode -->

// class Male: public Human{
//       public:
//       string color;

//       void say(){
//         cout<< "Male Say's : "<<endl;
//       }
// };




// int main(){



//      Male m1;
//      cout<<m1.height<<endl;

  /*
    Male object1;
    // cout<< object1.age <<endl;    // Human age is inaccessible bcz age is a private member of human.... >> If anything is marked private in base class and u are inheriting it in a public way, Then it will be not accessible :)
    cout<< object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;


    object1.setWeight(54);
    cout<<object1.weight<<endl;

    object1.say();    
    return 0;
}

*/



// Protected modifier -->>

// #include<iostream> 
// using namespace std;

// // FIRST WE WILL CREATE A HUMAN CLASS -->> PARENT CLASS 
// class Human{
//       public:
//       int height;
//       int weight;
//       private:
//       int age;

//       public:
//       int getAge(){
//         return this->age;
//       }
//       void setWeight(int w){
//         this->weight = w;
//       }
// };


// // Public mode -->

// class Male: protected Human{
//       public:
//       string color;

//       void say(){
//         cout<< "Male Say's : "<<endl;
//       }

//       int getHeight(){
//         return this->height;
//       }
// };




// int main(){



//      Male m1;
//      cout<<m1.getHeight()<<endl;


//      return 0;
// }



// Private modifier -->>


// #include<iostream> 
// using namespace std;

// // FIRST WE WILL CREATE A HUMAN CLASS -->> PARENT CLASS 
// class Human{
//       public:
//       int height;
//       int weight;
//       private:
//       int age;

//       public:
//       int getAge(){
//         return this->age;
//       }
//       void setWeight(int w){
//         this->weight = w;
//       }
// };


// // Public mode -->

// class Male: private Human{    // Height will become private bcz when supaer class is public, and the mode of inheritance is private, then answer will be private :)
//       public:
//       string color;

//       void say(){
//         cout<< "Male Say's : "<<endl;
//       }

//       int getHeight(){
//         return this->height;
//       }
// };




// int main(){



//      Male m1;
//      cout<<m1.getHeight()<<endl;   // It is not accessible bcz height is a private member -->>   but if i try to aceess it through get/set, then it will run -->>


//      return 0;
// }


// 2.) Combination -->>
// #include<iostream> 
// using namespace std;

// // FIRST WE WILL CREATE A HUMAN CLASS -->> PARENT CLASS 
// class Human{
//       protected:
//       int height;

//       public:
//       int weight;
//       private:
//       int age;

//       public:
//       int getAge(){
//         return this->age;
//       }
//       void setWeight(int w){
//         this->weight = w;
//       }
// };


// // Public mode -->

// class Male: public Human{    
//       public:
//       string color;

//       void say(){
//         cout<< "Male Say's : "<<endl;
//       }

//       int getHeight(){
//         return this->height;
//       }
// };




// int main(){



//      Male m1;
//     //  cout<<m1.height<<endl;
//      cout<<m1.getHeight()<<endl;   // It is not accessible bcz height is a protected member -->>   but if i try to aceess it through get/set, then it will run -->>


//      return 0;
// } 


// When both are Protected -->>
// #include<iostream> 
// using namespace std;

// // FIRST WE WILL CREATE A HUMAN CLASS -->> PARENT CLASS 
// class Human{
//       protected:
//       int height;

//       public:
//       int weight;
//       private:
//       int age;

//       public:
//       int getAge(){
//         return this->age;
//       }
//       void setWeight(int w){
//         this->weight = w;
//       }
// };


// // Public mode -->

// class Male: protected Human{    
//       public:
//       string color;

//       void say(){
//         cout<< "Male Say's : "<<endl;
//       }

//       int getHeight(){
//         return this->height;
//       }
// };




// int main(){



//      Male m1;
    //  cout<<m1.height<<endl; // height is protected member u can not access it -->  we can access it "inside class and child class"
    
//      return 0;
// } 



// #include<iostream> 
// using namespace std;

// // FIRST WE WILL CREATE A HUMAN CLASS -->> PARENT CLASS 
// class Human{
//       protected:
//       int height;

//       public:
//       int weight;
//       private:
//       int age;

//       public:
//       int getAge(){
//         return this->age;
//       }
//       void setWeight(int w){
//         this->weight = w;
//       }
// };


// // Public mode -->

// class Male: private Human{    
//       public:
//       string color;

//       void say(){
//         cout<< "Male Say's : "<<endl;
//       }

//       int getHeight(){
//         return this->height;
//       }
// };




// int main(){



//      Male m1;
//     //  cout<<m1.height<<endl; // height is protected member u can not access it directly :)
    
//      return 0;
// } 


// 3.) Private access modifier ->

// In private mode you can inherit it in any mode be in public, private and protected, in all cases it is not accessible it will give error ..... Not inside the class and lso not outside the class :)
// #include<iostream> 
// using namespace std;

// // FIRST WE WILL CREATE A HUMAN CLASS -->> PARENT CLASS 
// class Human{
//       private:
//       int height;

//       public:
//       int weight;
//       private:
//       int age;

//       public:
//       int getAge(){
//         return this->age;
//       }
//       void setWeight(int w){
//         this->weight = w;
//       }
// };


// // Public mode -->

// class Male: public Human{    
//       public:
//       string color;

//       void say(){
//         cout<< "Male Say's : "<<endl;
//       }

//       int getHeight(){
//         return this->height;
//       }
// };




// int main(){



//      Male m1;
//      cout<<m1.height<<endl;

    
//      return 0;
// } 