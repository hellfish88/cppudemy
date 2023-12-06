#include <iostream>
#include <type_traits>
#include <string>

class Rocket {
    friend std::ostream &operator <<(std::ostream &os, Rocket &r){
            os << "Name: " << r.get_name() << " "
            << "State: " << r.get_status(r.state) << " "
            << "Colour: " << r.get_colour_string(r.colour);
            return os;
        };
      
    public:
        enum class State  {Abort, Launch, Hold, Unknown};
        enum class Colour {White, Blue, Green, Yellow, Unknown};
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
                    result = this->get_status(Rocket::State::Unknown);
                    break;
                
            }
            return result;
        }
        std::string get_name() const {
            return this->name;
        };
        std::string get_colour_string(Colour colour) const {
            switch (colour){
                case Rocket::Colour::White:
                    return "White";
                    break;
                case Rocket::Colour::Blue:
                    return "Blue";
                    break;
                case Rocket::Colour::Green:
                    return "Green";
                    break;
                case Rocket::Colour::Yellow:
                    return "Yellow";
                    break;
                default:
                    return this->get_colour_string(Colour(Rocket::Colour::Yellow));
                    break;
            }
        }
        Colour get_colour () { return this->colour;}
        
        void set_state(State state) { this->state = state;};
        Rocket() 
        : state{Rocket::State::Hold}, colour{Colour::Unknown}, name{"Bajs"}{
        }
        ~Rocket() = default;
    private:
        State state;
        Colour colour;
        std::string name;  


};

int main () {

    Rocket apollo;
    apollo.set_state(Rocket::State::Launch);
    std::cout << apollo << std::endl;

    if (static_cast<int>(apollo.get_colour()) == 3){
        std::cout << "int" << std::endl;
    } else {
        std::cout << "Bajs" ;
    }

    return 0;
}