#ifndef MOVIE_HPP
#define MOVIE_HPP
#include <string>
#include <iostream>

class Movie {
private:
    std::string* name;
    std::string* rating;
    int times_watched;

public:
    // gets
    Movie(std::string&, std::string&, int t = 0);
    Movie(std::string&&, std::string&&, int t = 0);
    std::string get_name();
    std::string get_rating();
    int get_times_watched();
    // sets
    void set_name(const std::string*);
    void set_rating(const std::string* );
    void increment_watched();
    void watch();
    // Destructor
    ~Movie();
    // friend class Movies;
    // friend bool set_watch_count(std::string m, int count);
}; 


#endif // MOVIE_HPP
