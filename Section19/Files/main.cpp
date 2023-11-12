#include <iostream>
#include <fstream>





int main(){


    std::ifstream infile;
    std::fstream outfile;
    std::string line;

    infile.open("./filer/hello_world.txt");
    if (!infile){
        std::cerr << "Could not open file" << std::endl;
        return 1;
    }

    outfile.open("./filer/hej_varlden.txt", std::ios::app);

    // while (std::getline(infile, line)){
    //     std::cout  << line << '\n';
    // }

    if (!outfile.is_open()){
        std::cerr << "Kan inte öppna utfilen";
        return 1;
    }

    outfile << "Hej världen!\n";

    char c {};
    while (infile.get(c))
        std::cout << c;

    std::cout << std::endl;
    infile.close();
    outfile.close();

    return  0;
}