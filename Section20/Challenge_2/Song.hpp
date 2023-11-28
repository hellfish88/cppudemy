#ifndef _SONG_HPP_
#define _SONG_HPP_
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>


class Song {
    friend std::ostream& operator << (std::ostream &os, const Song &s){
        os << std::setw(30) << std::left <<
            s.title 
        << std::setw(40) << std::left <<
            s.artist
        << std::setw(5) << std::left <<
            s.rating <<
            std::endl;
        return os;
    };
    std::string title;
    std::string artist;
    int rating;

    public:
        Song() : title{"Unknown"}, artist{"unknown"}, rating{0} {};
        Song(std::string namevar, std::string artistvar, int ratingvar) 
            : title{namevar}, artist{artistvar}, rating{ratingvar} {};
        Song(std::string searchvar) : title{searchvar} {};
        bool operator<(const Song &rhs) const  {
            return this->title < rhs.title;
        }
        
        bool operator==(const Song &rhs) const  {
            if (this->title == rhs.title)
                return true;
            else {return false;}
        }
        std::string get_title() { return title; }
        ~Song() = default;
};


#endif