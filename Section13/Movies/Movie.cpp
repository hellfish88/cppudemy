#include "Movie.hpp"
#include <string>


void Movie::set_name(const std::string* name_val) {
    delete name; // Release previous memory
    name = new std::string(*name_val);
}

void Movie::set_rating(const std::string* rating_Val){
    delete rating;
    rating = new std::string(*rating_Val);
}

std::string Movie::get_name() {
    return *name;
}

std::string Movie::get_rating(){
    return *rating;
}

int Movie::get_times_watched(){
    return times_watched;
}

void Movie::watch() {
    ++times_watched;
}


// Constructor

Movie::Movie(std::string &n, std::string &r, int t)
    : name(new std::string(n)), rating(new std::string(r)), times_watched(t){
        std::cout << "Movie contstructor called for: " << *name << std::endl;
    }
Movie::Movie(std::string &&n, std::string &&r, int t)
    : name(new std::string(n)), rating(new std::string(r)), times_watched(t){
        std::cout << "Overloaded R-value Movie contstructor called for: " << *name << std::endl;
    }
// Destructor

Movie::~Movie(){
    std::cout << "Movie destructor called for " << *name << std::endl;
    delete name;
    delete rating;
}