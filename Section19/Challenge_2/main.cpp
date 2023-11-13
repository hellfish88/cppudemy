#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <iomanip>

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


std::vector<Score> parse_students(std::ifstream& infile, char *key){
    std::vector<Score> students{};
    size_t line_number{0};
    std::string line;
    std::vector<std::string> tempvector{};

    infile >> key;

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

     char *key = new char [6];

    std::ifstream ifile("./files/responses.txt");

    if (!ifile.is_open()){
        std::cerr << "Could not open file" << std::endl;
        return 1;
    }

    std::vector<Score> studenter = parse_students(ifile, key);

    const int left_field{20};
    const int middle_field{20};
    const int right_field{20};


    std::cout << std::setw(left_field) << std::left
        << "Student"
        << std::setw(right_field)
        << std::right
        << "Score"
        << std::endl;
    std::cout << std::setw(left_field + right_field) << std::setfill('-') << "-" << std::endl;
    double average {0};
    if (studenter.empty()) {
        std::cerr << "No students in list. No need to continue" << std::endl;
        return 1;
    }
    for (auto student : studenter) {
        std::cout << std::setw(left_field) << std::left << std::setfill(' ')
            << student.student 
            << std::setw(right_field)
            << std::right
            << grading(key, student.reply)
            << std::endl;
        average += grading(key, student.reply);
    }
    std::cout << std::setw(left_field + right_field) << std::setfill('-') << "-" << std::endl;
    std::cout << std::setfill(' ') << std::left 
        <<  std::setw(left_field)
        << "Average score" 
        << std::setw(right_field) 
        << std::right
        << (average / studenter.size()); // Sanity check above so should never be 0

    delete [] key;
    ifile.close();

    return 0;
}