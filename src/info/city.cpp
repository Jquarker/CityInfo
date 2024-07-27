#include"city.h"
#include<iostream>

City::City() {
    std::cout << "City created successfully" << std::endl;
}

City::City(const std::string& name) : name(name) {
    std::cout << "City created successfully with name: " << name << std::endl;
}

void City::addSchool(const std::string& school) {
    schools.push_back(school);
}

void City::addHospital(const std::string& hospital) {
    hospitals.push_back(hospital);
}

void City::addFactory(const std::string& factory) {
    factories.push_back(factory);
}

std::string City::getName() const {
    return name;
}

std::vector<std::string> City::getSchools() const {
    return schools;
}

std::vector<std::string> City::getHospitals() const {
    return hospitals;
}

std::vector<std::string> City::getFactories() const {
    return factories;
}
