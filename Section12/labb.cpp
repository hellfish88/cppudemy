#include <iostream>
#include <string>


void display(int *fisk, int sent){
    while(*fisk != sent){
        std::cout << *fisk++ << " ";
    }
    std::cout << std::endl;
}

void reverse_array(int* arr, int size) {
    //-- Write your code below this line 
    
    int sizeindex = size - 1;
    for (int i{0}; i < size / 2; i++){
        std::cout << "First: " << *(arr + i) << " Last: " << *(arr + sizeindex) << std::endl;
        *(arr + i) += *(arr + sizeindex);
        *(arr + sizeindex) = *(arr + i) - *(arr + sizeindex);
        *(arr + i) -= *(arr + sizeindex);
        std::cout << "First: " << *(arr + i) << " Last: " << *(arr + sizeindex) << std::endl;
        sizeindex--;
    }
    
    //-- Write your code above this line
}


int main(){

    int scores[] {100,99,98,97,96, -1};
    int scores2[] {100,99,98,97,96,95};
    std::string test{"hejsan"};
    std::string* test_ptr{&test};
    std::string reverse{};


    display(scores, -1);
    std::cout << scores << std::endl;

    std::cout << "----------------------" << std::endl;

    int size = sizeof(scores2) / sizeof(scores2[0]);
    reverse_array(scores2, size);
    std::cout << "----------------------" << std::endl;

    std::cout << test_ptr << std::endl;

    for (std::string::reverse_iterator rit=test.rbegin(); rit!=test.rend();++rit){
 //       std::cout << *rit;
        reverse += *rit;
    }
    std::cout << reverse << std::endl;

    return 0;
}