#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include <cstring>

struct Score {
    std::string student;
    char reply[6];
};


bool is_even(int num){
    if (num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}


void read_file(std::ifstream &infile){
    std::string line{};
    std::vector<std::string> test{};
    if (!infile.is_open()){
        std::cerr << "Could not open file" << std::endl;
    }
    size_t line_number{0};
    while(std::getline(infile, line)){
        line_number++;
        if (line_number > 1) 
            // std::cout<< line_number << ": " << line << std::endl;
            test.push_back(line);        
    }
    for (int i{0}; i<test.size(); i++){
        if (is_even(i))
            std::cout << test.at(i) << " " << test.at(i+1) << std::endl;
    }

}

std::vector<Score> parse_students(std::ifstream& infile){
    std::vector<Score> students{};
    size_t line_number{0};
    std::string line;
    std::vector<std::string> tempvector{};

    while(std::getline(infile, line)){
        line_number++;
        if (line_number > 1) {
            tempvector.push_back(line);
        }
    }
    for (int i{0}; i<tempvector.size(); i++){
        if (is_even(i)){
            Score student;
            student.student = tempvector.at(i);
            
            std::strcpy(student.reply, tempvector.at(i+1).c_str());

            students.push_back(student);
        }
    }

    return students;
    
}

int grading(char *key, char *answer){
    int score{0};
    for (size_t i{0}; i<5; i++){
        if (answer[i] == key[i])
            score++;
    }
    return score;
}



int main() {

    

    

    std::ifstream ifile("./files/responses.txt");
    std::vector<Score> studenter = parse_students(ifile);
    // // std::string line {};

    read_file(ifile);

    for (auto val : studenter) {
        std::cout << "Studenten " << val.student << " svarade: " << val.reply << std::endl;
    }

    // ifile.close();

    // char *nyckel [5] = {"ABCDE"};
    // char *svar [5] = {"ABCDE"};
    // Score Moe {"Moe", *svar};
    // std::cout << Moe.reply << std::endl;

    // std::cout << grading(*nyckel, *svar) << std::endl;

    return 0;
}