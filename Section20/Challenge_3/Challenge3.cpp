#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <cctype>
#include <array>
#include <iomanip>

std::string clean_string(const std::string &s) {
    std::string returnstring;
    size_t cnt{0};
    for (char c : s ){
        if (isalnum(c)){
            if (cnt == 0){
                returnstring += toupper(c);
                cnt++;
            } else {
                returnstring += c;
            }
        } else {
            continue;
        }
    };

    return returnstring;
}

void display_1 (std::map<std::string, int> maps) {
    for (auto kv : maps){
        std::cout << kv.first << "-> " << kv.second << std::endl;
    }
}

std::string set_to_string(const std::set<int>& s) {
    std::ostringstream oss;
    oss << "[ ";
    for (int n : s) {
        oss << n << " ";
    }
    oss << "]";
    return oss.str();
}

void display_2 (const std::map<std::string, std::set<int>> &maps){
    for (auto kv: maps){
        std::cout << std::setw(20) << std::left <<
            kv.first
            << std::setw(5) << std::left <<
            set_to_string(kv.second) << std::endl;
    }
}


int main() {


    std::ifstream words;
    words.open("./files/words.txt");
    std::string line;
    std::map<std::string, int> wordcount;
    std::map<std::string, std::set<int>> linecount;

    if (!words.is_open()){
        std::cerr << "File could not be opened" << std::endl;
        return 1;
    }
    int linenumber{1};
    while (std::getline(words, line)){
        std::stringstream ss(line);
        std::string placeholder;
        
        while (ss >> placeholder){
            wordcount.emplace(clean_string(placeholder), 1);
            wordcount.emplace(clean_string(placeholder), wordcount[clean_string(placeholder)]++);
            linecount[clean_string(placeholder)].emplace(linenumber);
        }
        linenumber++;
    }
    // display_1(wordcount);
    display_2(linecount);


    words.close();

    return 0;
}