#include "Movies.hpp"


std::vector<Movie> Movies::get_movies(){
    return collection;
}

void Movies::list_movies(){
    for (auto movie: collection){
        std::cout << "Name: " << movie.get_name() << " Rating: " << movie.get_rating() << std::endl;
    }
}

bool Movies::add_movie(std::string movie_name, std::string rating_val){
    collection.push_back(Movie{movie_name, rating_val});
    collection_size++;
    return true;
}

void Movies::watch_movie(std::string n) {
    for (Movie mov: collection){
        if (mov.get_name() == n){
            mov.watch();
            break;
        }
    }
    std::cout << "Movie not in library" << std::endl;
}

int Movies::get_times_watched(Movie m){
    m.get_times_watched();
}

int Movies::get_collection_size(){
    return collection_size;
}

Movies::~Movies(){
}


Movies::Movies()
    : collection_size(0) {
        std::cout << "Movies contstructor called." << std::endl;
}