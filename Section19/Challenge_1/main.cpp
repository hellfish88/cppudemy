#include "structs.hpp"

struct City {
    std::string name;
    int population;
    double cost;
};


struct Country{
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

Tours tour = {
    "Priser från Jönköping",
    {
        {
            "Thailand", {
                {"Bangkok", 10000000, 25000.00},
                {"Buri Ram", 150000, 35000.00},
                {"Chiang Mai", 350000, 28755.00},
                {"Phuket", 155000, 321456.00}
            }
        },
        {
            "Norway", {
                {"Oslo", 500000, 5000},
                {"Trondheim", 80000, 10000},
                {"Bergen", 200000, 20005}
            }
        },
        {
            "Sweden", {
                {"Jönköping", 150000, 0},
                {"Stockholm", 750000, 5000}
            }
        },
    }
};

// +tour.countries.at(0).cities.at(1).name.size()) /// const auto city : country.cities


int main () {

    hej();
    std::cout << std::setw(140) << std::setfill('=') << "=" << std::endl;
    std::cout << std::setw(70) << std::setfill('=') <<  tour.title << std::setw(73) << "=" <<  std::endl;
    std::cout << std::setw(140) << std::setfill('=') << "=" << "\n\n" << std::endl;
    std::cout << std::setfill(' ');
    ruler();
    std::cout << "Country" << std::setw(50) << "City" << std::setw(50) << "Pupulation" << std::setw(33) << "Cost" << std::endl;
    std::cout << std::setw(140) << std::setfill('-') << "-" << "\n" << std::setw(50)  << std::endl;
    for (const auto country : tour.countries ) {
        std::cout << std::setfill(' ') << std::left << country.name;
        for (size_t i{0}; i < country.cities.size(); i++ ) {
            size_t indent{};
            if (i == 0){
                indent = 10;
            } else {
                indent = 50+ country.name.size() + country.cities.at(i-1).name.size() - 4;

            }

            std::cout << std::setw(indent) << std::right
                << country.cities.at(i).name
                << std::setw(50)
                << country.cities.at(i).population 
                << std::setw(33)
                << country.cities.at(i).population << std::endl;
        }
    }


   return 0; 
}