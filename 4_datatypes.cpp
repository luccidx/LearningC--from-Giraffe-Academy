#include<iostream>

int main(){
    char grade = 'A'; //char
    std::string phrase = "Giraffe Academy";//string
    int age = 21; //integer
    double gpa = 8.7; //it can store more decimal point 
    float gpa_flt = 4.5;//float
    bool guess; //boolean

    //sizeof() is used to see what memory that datatype hold
    std::cout<<sizeof(grade)<<std::endl;
    std::cout<<sizeof(phrase)<<std::endl;
    std::cout<<sizeof(age)<<std::endl;
    std::cout<<sizeof(gpa)<<std::endl;
    std::cout<<sizeof(gpa_flt)<<"\n";
    std::cout<<sizeof(guess)<<std::endl;
    return 0;
}