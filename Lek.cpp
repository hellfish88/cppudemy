#include <iostream>
#include <type_traits>
#include <string>

class Rocket {
    public:
        enum class State  {Abort, Launch, Hold, Unknown};
        enum class Colour {White, Blue, Green, Yellow};
        std::string get_status(const State &state) const {
            std::string result;
            switch(state){
                case Rocket::State::Abort:
                    result = "Abort";
                    break;
                case Rocket::State::Launch:
                    result = "Launch";
                    break;
                case Rocket::State::Hold:
                    result = "Hold";
                    break;
                case Rocket::State::Unknown:
                    result = "Unknown";
                    break;
                default:
                    result = get_status(Rocket::State::Unknown);
                    break;
                
            }
            return result;
        }
        std::string get_name()
        std::ostream &operator <<(std::ostream &os, const Rocket &r){
            os << "Name: " << r.name
            << "State: " << r.get_status(r.state)
            << "Colour: " << r.get_colour()
        }
    private:
        State state;
        Colour colour;
        std::string name;


};

int main () {




    return 0;
}