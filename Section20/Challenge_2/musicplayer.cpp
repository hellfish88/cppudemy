#include ".\Song.hpp"
#include <list>


void display (std::list<Song> &songs){
    for (auto song : songs){
        std::cout << song;
    }
}

void play_song (Song it) {
    std::cout << it; 
}


int main() {
    Song song1;
    Song song2{"Genesarets Sjo", "Kjell Höglund", 5};
    Song song2_5{"Genesarets Sjo", "Kjell Höglund", 5};
    Song song3{"Through the fire and flames", "Dragonball", 4};

    std::list songs {song1, song2, song3};
    // auto it = std::find(songs.begin(), songs.end(), "Genesarets Sjo");

    // std::cout << song2 == song2_5;
    std::cout << song2 < song3;
    // std::cout << song2 == song3;
    display(songs);

    return 0;
}