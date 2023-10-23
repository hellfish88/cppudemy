#include <iostream>
#include "Movie.hpp"
#include "Movies.hpp"

int main() {

    Movie fisk{"Ole Ivars", "Tripple X", 0};

    std::cout << fisk.get_name() << std::endl;
    std::cout << fisk.get_rating() << std::endl;
    std::cout << fisk.get_times_watched() << std::endl;
    fisk.watch();
    std::cout << fisk.get_times_watched() << std::endl;
    std::cout << "=================================\n";

    
    Movies* samling = new Movies;
    (*samling).add_movie("Rema Rama Rolf", "xxx");
    samling->add_movie("Pornhub", "PG-13");
    samling->add_movie("Pornhub", "PG-13");
    samling->watch_movie("Pornhub");
    samling->watch_movie("Pornhub");
    samling->watch_movie("Pornhub");
    samling->watch_movie("Pornhub2");
    samling->list_movies();
    std::cout << "Samling contains: " << samling->get_collection_size() << " movies." << std::endl;

    for(Movie *m: samling->get_movies()){
        std::cout << "Namn: " << m->get_times_watched() << std::endl;
    }
    return 0;
}