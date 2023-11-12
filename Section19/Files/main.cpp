#include <iostream>
#include <fstream>





int main(){


    std::ifstream infile;
    std::string line;

    infile.open("./filer/hello_world.txt");
    if (!infile){
        std::cerr << "Could not open file" << std::endl;
        return 1;
    }

    // while (std::getline(infile, line)){
    //     std::cout  << line << '\n';
    // }

    char c {};
    while (infile.get(c))
        std::cout << c;

    std::cout << std::endl;
    infile.close();

    return  0;
}