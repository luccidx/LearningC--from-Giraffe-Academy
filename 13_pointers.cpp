#include<iostream>
using namespace std;

int main(){

    int age = 21;
    double gpa = 8.7;
    string name = "Santosh";

    int *pAge = &age;

    cout<<"at &age ---->>"<<&age;
    cout<<"\n";
    cout<<"at age ---->"<<age;
    cout<<"\n";
    cout<<"at pAge ---->"<<pAge;
    cout<<"\n";
    cout<<"at *pAge ---->"<<*pAge; //this is called dereferncing pointer
    cout<<"\n";
    cout<<"at *&age ---->>"<<*&age;// also dereferencing pointer
    
    return 0;
}

