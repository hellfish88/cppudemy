#include <iostream>
#include <fstream>
#include <string>

int main () {

    std::ifstream inputfile;
    std::ofstream outputfile;

    inputfile.open("./files/romeoandjuliet.txt");
    if (!inputfile.is_open()){
        std::cerr << "Couldn't open inputfile" << std::endl;
    }

    outputfile.open("./files/romeoandjuliet(1).txt", std::ios::out);
    if (!outputfile.is_open()){
        std::cerr << "Couldn't open inputfile" << std::endl;
    }

    std::string line;

    int line_number{1};
    while(std::getline(inputfile, line)){
        // if (line.find_first_not_of(' ') != line.npos){
        if (line == ""){
    outputfile << '\n';
        }
        else {
            outputfile << line_number << '\t' << line << std::endl;
            line_number++;
        }
    }



    inputfile.close();
    outputfile.close();


    return 0;
}