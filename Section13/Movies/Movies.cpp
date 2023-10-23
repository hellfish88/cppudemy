#include "Movies.hpp"


std::vector<Movie*> Movies::get_movies(){
    return collection;
}

void Movies::list_movies(){
    for (auto *movie: collection){
        std::cout << "Name: " << movie->get_name() << " Rating: " << movie->get_rating() << std::endl;
    }
}

bool Movies::add_movie(std::string movie_name, std::string rating_val){
    for (Movie *mov: collection){
        if (mov->get_name() == movie_name){
            std::cout << "Movie already in list." << std::endl;
            return false;
        }
    }
    Movie* newMovie = new Movie(movie_name, rating_val);
    collection.push_back(newMovie);
    collection_size++;
    return true;
}

void Movies::watch_movie(std::string n) {
    bool found{false};
    for (Movie *mov: collection){
//        std::cout << "Debug \"Mov\" name: " << mov->get_name() << std::endl;
        if (mov->get_name() == n){
            mov->watch();
            found = true;
            break;
        }
    }
    if (!found)
        std::cout << "Movie not in library" << std::endl;
}

int Movies::get_times_watched(Movie m){
    return m.get_times_watched();
}

bool Movies::set_watch_count(std::string m, int count){
    bool found{false};
    for (Movie *mov: collection){
        if (mov->get_name() == m){
            (*mov).times_watched = count;
            found = true;
            return found;
        }
    }
    if (!found)
        return found;
}

int Movies::get_collection_size(){
    return collection_size;
}

Movies::~Movies(){
    std::cout << "Movies destructor called" << std::endl;
    for (Movie* movie : collection){
        std::cout << "Destructor inside movies loop called for: " << std::endl;
        delete movie;
    }
}


Movies::Movies()
    : collection_size(0) {
        std::cout << "Movies contstructor called." << std::endl;
}