#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void find_substring(std::ifstream &infile){
    long matches{0};
    long words {0};
    std::string search_string;
    std::string line;

    std::cout << "Enter the substring to search for: ";
    std::cin >> search_string;
    std::cout << std::endl;

    while(std::getline(infile, line)){
        std::stringstream ss(line);
        std::string word;
        while (ss >> word){
            words++;
            if (word.find(search_string) != std::string::npos)
                matches++;
        }
    }
    std::cout << "Total words: " << words << std::endl;
    std::cout << "Matches found: " << matches << std::endl;


}


int main () {

    const std::string filename{"./files/romeoandjuliet.txt"};
    std::ifstream infile;
    infile.open(filename);

    if (!infile.is_open()){
        std::cerr << "Couldnt open file";
        return 1;
    }

    find_substring(infile);


    infile.close();
    return 0;
}