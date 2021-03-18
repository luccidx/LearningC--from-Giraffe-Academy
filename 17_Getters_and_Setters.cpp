#include<iostream>

using namespace std;


// getters and setters are usefull to control different attributes and elements in a class


class Movie{
    private:
        string rating;
    public:
        string title;
        string director;
        

        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            rating = aRating;
        }

        void setRating(string aRating){
            if(aRating == "G" ||aRating == "PG" ||aRating == "PG-13" ||aRating == "R" ||aRating == "NR"){
                rating = aRating;
            }else{
                rating = "NR";
            }
        }
        string getRating(){ //since rating is private we can use it unless we call and return in a function inside the class
            return rating;
        }

};
int main(){
    Movie avengers("The Avengers","Joss Whedon","PG-13");
    // the rating can be given anything which might not be even valid according to our example 
    // like we could even give rating as DOG and the program works fine
    //but we know its not a rating 

    // so inorder to specify seperate restriction on what the arguments to be passed 
    // we use getters and setters 


    // if we try below we can access as rating is in private 
    //cout<<avengers.rating; //   

    avengers.setRating("DOG"); //we know it is not a type of rating so it will return as "NR"

    cout<<avengers.getRating();



    return 0;
}