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
};

std::unique_ptr<std::vector<std::shared_ptr<Fisk>>> make();
void fill(std::vector<std::shared_ptr<Fisk>> &vec, int num);
void display(std::vector<std::shared_ptr<Fisk>> &vec);

std::unique_ptr<std::vector<std::shared_ptr<Fisk>>> make(){
    // std::shared_ptr<Fisk> = test1;
}



int main () {


    std::unique_ptr<Fisk> test1("Abborre");


    return 0;
}