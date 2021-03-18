#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;
    int age;

    cout<<"enter your age: ";

    // cin with double more than sign >>
    cin>> age;
    cout<<"your age is "<< age <<" years old\n";
    //enntering a string


    cin.ignore(); 
    // getline is similar scanf in c programming
    // when it gets a blankspace it ends the execution
    // similarly in case of cin
    // so first we need to give cin.ignore() to ignore any newline operator \n or endline 
    //and execute 
    cout<<"enter your name: ";
    getline(cin , name);

    cout<<"hello "<<name;

    return 0;
    
}