#include "Song.hpp"
#include <list>


void display_playlist (std::list<Song> &songs){
    for (auto song : songs){
        std::cout << song;
    }
}

void display_menu() {
    std::cout << R"(
F - Play First Song
N - Play Next Song
P - Play Previous Song 
A - Add New Song 
L - List Current Playlist
Q - Quit )" 
    << std::endl;
}

// template <typename T>
// void play_song (T &it) {
//     std::cout << *it; 
// }

void play_song (std::_List_iterator<Song> &it, std::list<Song> &songs, int num=0) {
    if (num > 0){
        if (it != songs.end()){
            it++;
        } else {
            it = songs.begin();
            it++;
        }
    } else if (num < 0) {
        if (it != songs.begin()) {
            it--;
        } else {
            it = songs.end();
            it--;
        }
    }
    std::cout << *it; 
}

void action(std::list<Song> songs) {
    char menuselection;
    auto it = songs.begin();

    do {
        display_menu();
        std::cout << "======================" << std::endl;
        std::cout << "Enter a selection (Q to quit): ";
        std::cin >> menuselection;

        switch(::toupper(menuselection)) {
            case 'F':
                play_song(it, songs);
                break;
            case 'N':
                play_song(it, songs, 1);
                break;
            case 'P':
                play_song(it, songs, -1);
                break;
            // case 'A':
            //     add_song(songs);
            //     break;
        }
    } while (::toupper(menuselection) != 'Q');
}


int main() {
    Song song1;
    Song song2{"Genesarets Sjo", "Kjell Höglund", 5};
    Song song2_5{"Genesarets Sjo", "Kjell Höglund", 5};
    Song song3{"Through the fire and flames", "Dragonball", 4};

    std::list songs {song1, song2, song3};
    auto it = std::find(songs.begin(), songs.end(), Song("Genesarets Sjo"));
    auto first = songs.begin();
    action(songs);

    return 0;
}