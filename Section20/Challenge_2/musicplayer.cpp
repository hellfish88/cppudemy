#include "Song.hpp"
#include <list>


void display (std::list<Song> &songs){
    for (auto song : songs){
        std::cout << song;
    }
}

// template <typename T>
// void play_song (T &it) {
//     std::cout << *it; 
// }

void play_song (std::_List_iterator<Song> &it) {
    std::cout << *it; 
}
int main() {
    Song song1;
    Song song2{"Genesarets Sjo", "Kjell Höglund", 5};
    Song song2_5{"Genesarets Sjo", "Kjell Höglund", 5};
    Song song3{"Through the fire and flames", "Dragonball", 4};

    std::list songs {song1, song2, song3};
    auto it = std::find(songs.begin(), songs.end(), Song("Genesarets Sjo"));

    play_song(it);


    // std::cout << *it << std::endl;
    // std::cout << *(std::prev(it)) << std::endl;
    // std::cout << *it << std::endl;

    // display(songs);

    return 0;
}