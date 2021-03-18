#include<iostream>

using namespace std;

// classes is used in creating a new type of datatype

class Book{
    public:
        string title;
        string author;
        int pages;
};

// class is like a template 
// where object is actual instance in a class
// i.e. object is actual book 
// class is template fo book


int main()
{

    Book book1;
    book1.title = "Harry potter";
    book1.author = "JK Rowling";
    book1.pages = 900;

    Book book2;
    book2.title = "Angels and demons";
    book2.author = "DAN BROWN";
    book2.pages = 500;

    cout << book1.pages;
    cout<<"\n";
    cout<< book2.author;

    return 0;
}

