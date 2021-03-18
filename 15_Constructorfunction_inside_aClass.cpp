#include<iostream>

using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        Book(string aTitle, string aAuthor, int aPages){ // this is constructor function
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

        Book(){//we can create any number of constructor func
            title = "No Title";
            author = "No Author";
            pages = 0;
        }
};

int main()
{

    Book book1("Harry potter", "JK Rowling", 900);
    Book book2("Angels and demons","DAN BROWN",500);

    Book book3; // we are passing in second constructor function which does not have any arguments 

    //created book1 and book2 objects implicitly by calling arguments in constructor function
    cout << book1.pages;
    cout<<"\n";
    cout<< book2.author;
    cout<<"\n";
    cout<<book3.title;//we are printing values stored in second constructor 
    return 0;
}

