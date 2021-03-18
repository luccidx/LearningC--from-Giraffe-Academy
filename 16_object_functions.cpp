#include<iostream>

using namespace std;

// object functions are also sometimes called as instance function

// its a function used inside a class

class Student{
    public:
        string name;
        string department;
        double gpa;

        Student(string aName, string aDepartment, double aGpa){
            name = aName;
            department = aDepartment;
            gpa = aGpa;

        }

        bool graduate(){  //we created object function same like constructor func & we give a return type 
            if(gpa > 8){
                cout<<"has elegibility to graduate"<<endl;
            }else{
                cout<<"has no eligibility to graduate"<<endl;
            }
            
        }

};



int main(){
    Student student1("Santosh","E&C",8.74);
    Student student2("Vishal","Civil",7.9);

    cout<< student1.graduate()<<endl;
    cout<< student2.graduate()<<endl;

    return 0;
}