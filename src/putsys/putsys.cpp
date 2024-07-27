#include"putsys.h"
//input_system
void inputsys::addCity(const City& city){
    cities[city.getName()] = city;
}

void inputsys::inputCityInfo(City &city) {
    std::string input;

    std::cout << "Enter schools('done' finished):" << std::endl;
    while (true) {
        std::cout << "School: ";
        std::getline(std::cin, input);
        if (input == "done") break;
        city.addSchool(input);
    }

    std::cout << "Enter hospitals('done' finished):" << std::endl;
    while (true) {
        std::cout << "Hospital: ";
        std::getline(std::cin, input);
        if (input == "done") break;
        city.addHospital(input);
    }

    std::cout << "Enter factories('done' finished):" << std::endl;
    while (true) {
        std::cout << "Factory: ";
        std::getline(std::cin, input);
        if (input == "done") break;
        city.addFactory(input);
    }

    addCity(city);
}


City inputsys::getCity(const std::string& cityName)const{
    std::map<std::string, City>::const_iterator i = cities.find(cityName);
    if(i!=cities.end()) return i->second;
    else return City("No city was found");
}

// 查找city并返回
void outputsys::printcity(const std::string& cityName, const inputsys& inputsystem) const {
    City city = inputsystem.getCity(cityName);

    std::cout << "City:" << city.getName() << std::endl;

    std::cout << "Schools: ";
    std::vector<std::string>::const_iterator school_i;
    for (school_i = city.getSchools().begin(); school_i != city.getSchools().end(); ++school_i)
        std::cout << *school_i << " ";
    std::cout << std::endl;

    std::cout << "Hospitals: ";
    std::vector<std::string>::const_iterator Hospital_i;
    for (Hospital_i = city.getHospitals().begin(); Hospital_i != city.getHospitals().end(); ++Hospital_i)
        std::cout << *Hospital_i << " ";
    std::cout << std::endl;

    std::cout << "Factories: ";
    std::vector<std::string>::const_iterator Factorie_i;
    for (Factorie_i = city.getFactories().begin(); Factorie_i != city.getFactories().end(); ++Factorie_i)
        std::cout << *Factorie_i << " ";
    std::cout << std::endl;
}
