#include <iostream>
#include <vector>
#include <memory>
#include <string>


class Fisk {
    private:
        std::string Type;
    public:
        Fisk() {
            Type = "Unnamed";
        }
        Fisk(std::string type)
            : Type(type){};
        ~Fisk() { std::cout << "Destructor for " << Type << std::endl; };
        std::string get_type() { return Type; };
};

auto make();
void fill(std::vector<std::shared_ptr<Fisk>> &vec, int num);
void display(std::vector<std::shared_ptr<Fisk>> &vec);

auto make(){
    // std::vector<std::shared_ptr<Fisk>> vec;
    // std::unique_ptr<std::vector<std::shared_ptr<Fisk>>> retval = std::make_unique<std::vector<std::shared_ptr<Fisk>>>();
    return std::make_unique<std::vector<std::shared_ptr<Fisk>>>();;
}

void fill(std::vector<std::shared_ptr<Fisk>> &vec, int num){
    for (size_t i{0}; i<num;i++){
        std::string placeholder;
        std::cout << "Please enter option #" << i+1 << ": ";
        std::cin >> placeholder;

        vec.push_back(std::make_shared<Fisk>(placeholder));
    }
}

void display(std::vector<std::shared_ptr<Fisk>>& vec){
    std::cout << "==========================\n";
    std::cout << "Displaying content of vector\n";
    for (const auto &fisk : vec){
        std::cout << fisk->get_type() << std::endl;
    }
}
int main () {

    std::unique_ptr<std::vector<std::shared_ptr<Fisk>>> testvec;

    testvec = make();

    fill(*testvec, 3);

    display(*testvec);

    return 0;
}