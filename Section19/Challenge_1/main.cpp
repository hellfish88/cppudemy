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
    "Priser från jönköping",
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
                {"Jönköping", 150000, 10},
                {"Stockholm", 750000, 5000}
            }
        },
    }
};

// +tour.countries.at(0).cities.at(1).name.size()) /// const auto city : country.cities


int main () {

    const int total_w {70};
    const int field1 {20};
    const int field2 {20};
    const int field3 {15};
    const int field4 {15};
    const int title_len = (total_w /2) + (tour.title.length()/2);


    hej();
    std::cout << std::setw(total_w) << std::setfill(' ') << "" << std::endl;
    std::cout << std::setw(title_len) << std::setfill('=') <<  tour.title << std::setw(total_w-title_len+3) << "" <<  std::endl;
    std::cout << std::setw(total_w) << std::setfill('=') << "=" << "\n\n" << std::endl;
    std::cout << std::setfill(' ');
    ruler();
    std::cout   << std::setw(field1) << std::left << "Country"
                << std::setw(field2) << std::left << "City"
                << std::setw(field3) << std::right << "Population"
                << std::setw(field4) << std::right << "Price"
                << std::endl;
    std::cout << std::setw(total_w) << std::setfill('-') << "-" << "\n" << std::setw(50)  << std::endl;
    std::cout << std::setfill(' ') << std::left;
    for (const auto country : tour.countries ) {
        // std::cout << std::setfill(' ') << std::left << country.name;
        for (size_t i{0}; i < country.cities.size(); i++ ) {
            std::cout   << std::setw(field1) << std::left << ((i == 0) ? country.name : "")
                        << std::setw(field2) << std::left << country.cities.at(i).name
                        << std::setw(field3) << std::right << country.cities.at(i).population
                        << std::setw(field4) << std::right << country.cities.at(i).cost
                        << std::endl;
        }
    }
    std::cout << std::endl;


   return 0; 
}