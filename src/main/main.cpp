#include <limits>
#include "putsys.h"

int main() {
    inputsys inputSystem;
    outputsys outputSystem;

    while (true) {
        std::cout << "1. Add city info" << std::endl;
        std::cout << "2. Print city info" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Choose an option: ";

        int choice;
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == 1) {
            std::string cityName;
            std::cout << "Enter city name: ";

            std::getline(std::cin, cityName);

            City city(cityName);
            inputSystem.inputCityInfo(city);
            inputSystem.addCity(city);
        } else if (choice == 2) {
            std::string cityName;
            std::cout << "Enter city name to print: ";
            std::getline(std::cin, cityName);
            outputSystem.printcity(cityName, inputSystem);
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Wrong choice" << std::endl;
        }
    }

    return 0;
}
