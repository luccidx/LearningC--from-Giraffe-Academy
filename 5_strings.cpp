#include<iostream>

int main(){
    std::string phrase = "Santosh";

    //using string functions
    //length() function gives length of the string
    //we usually use a dot . with string
    std::cout<<phrase.length()<<"\n";
    
    //indexing of strings (strats from 0th position)
    std::cout<<phrase[3]<<"\n"; 

    
    phrase[0] = 'P';
    std::cout<<phrase<<"\n";

    //finding information inside a string using find() func
    //it takes 2 parameters ("string to be searched",index position after which it needs to find it) and gives out at which index position it can be found
    std::cout<<phrase.find("tosh", 0)<<"\n";

    //substring() func is used to trim a string and use as a seperate string
    // it has 2 parameters substr(start index, stop index)

    std::string phrasesub = phrase.substr(1,3);
    std::cout<<phrasesub<<"\n";
    return 0;
}