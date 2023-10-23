#ifndef MOVIES_HPP
#define MOVIES_HPP
#include <string>
#include <vector>
#include "Movie.hpp"
#include <iostream>

class Movies {
private:
    std::vector<Movie*> collection;
    int collection_size;


public:
    Movies();
    std::vector<Movie*> get_movies();
    int get_collection_size();
    void list_movies();
    bool add_movie(std::string movie_name = "Unknown", std::string rating_val = "Unknown");
    bool remove_movie(std::string movie_name);
    void watch_movie_by_name(std::string);
    void watch_movie_by_loc(int);
    int get_times_watched(Movie);
    void list_movies_names();
    // bool set_watch_count(std::string, int);
    // Destructor
    ~Movies();
}; 


#endif // MOVIES_HPP
