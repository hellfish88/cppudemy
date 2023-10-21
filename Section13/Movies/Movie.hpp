#ifndef MOVIE_HPP
#define MOVIE_HPP
#include <string>
#include <iostream>

class Movie {
private:
    std::string name;
    std::string rating;
    int times_watched;

public:
    // gets
    Movie(std::string, std::string, int t = 0);
    std::string get_name();
    std::string get_rating();
    int get_times_watched();
    // sets
    void set_name(std::string name_val);
    void set_rating(std::string rating_Val);
    void increment_watched();
    void watch();
    // Destructor
    ~Movie();
}; 


#endif // MOVIE_HPP
