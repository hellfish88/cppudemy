#include "funcs.hpp"

char menu(){
    char user_val;
    std::cout << "A: Add movie" << std::endl;
    std::cout << "L: List movies" << std::endl;
    std::cout << "W: Watch movie" << std::endl;
    std::cout << "R: Remove movie" << std::endl;
    std::cout << "Q: exit" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;



    std::cout << "Enter meny selection: ";
    std::cin >> user_val;

    return toupper(user_val);
}

void action(Movies *profile){
    char user_val;
    do {
        user_val = menu();
        switch(user_val){
            case 'A': {
                std::string movie_to_add{};
                std::string rating_to_add{};
                std::cout << "Enter movie to add: ";
                std::getline(std::cin, movie_to_add);
                // std::cin >> movie_to_add;
                std::cout << "And it's rating: ";
                std::getline(std::cin, rating_to_add);
                // std::cin >> rating_to_add;

                if(profile->add_movie(movie_to_add, rating_to_add)){
                    std::cout << "Success!" << std::endl;
                } else {
                    std::cout << "Couldn't add movie. Already exists in profile" << std::endl;
                }
                break;
            }
            case 'L': {
                profile->list_movies();
                break;
            }

        }
    } while (user_val != 'Q');
}