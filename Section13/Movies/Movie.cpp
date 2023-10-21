#include "Movie.hpp"
#include <string>

void Movie::set_name(std::string name_val){
    name = name_val;
}

void Movie::set_rating(std::string rating_Val){
    rating = rating_Val;
}

std::string Movie::get_name() {
    return name;
}

std::string Movie::get_rating(){
    return rating;
}

int Movie::get_times_watched(){
    return times_watched;
}

void Movie::watch() {
    ++times_watched;
}


// Constructor

Movie::Movie(std::string n, std::string r, int t)
    : name(n), rating(r), times_watched(t){
        std::cout << "Movie contstructor called for: " << name << std::endl;
    }

// Destructor

Movie::~Movie(){
}