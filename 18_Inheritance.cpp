#include<iostream>

using namespace std;

//inheritance is used to define a class within another class
// and the subclass can use functionality of the main class


class Chef{
    public:
        void makechicken(){
            cout<<"The Chef can make Chicken"<<endl;
        }
        void makesalad(){
            cout<<"The Chef can make salad"<<endl;
        }
        void makebiryani(){
            cout<<"The Chef can make biryani"<<endl;
        }
        void specialdish(){
            cout<<"the chef makes bbq Chicken kabeb"<<endl;
        }
};

class Italianchef : public Chef{
     //method to inherit for class Chef
    public:
        void makeburger(){
            cout<<"the chef can make Burger"<<endl;
        }
    void specialdish(){
        //we can override a function form main class by copying and using in subclass with whatever changes we need in the function in subclass
            cout<<"the chef makes shavarma Chicken kabeb"<<endl;
        }
};
int main(){
    Chef chef1;
    chef1.makechicken();

    Italianchef chefitalian;
    chefitalian.makechicken();//even italianchef class is able to access the public domain from Chef class
    
    chefitalian.makeburger(); // italianchef class also has its own unique function too
    
    chef1.specialdish();
    chefitalian.specialdish();
    return 0;
}