#ifndef CITY_H
#define CITY_H

#include <string>
#include <vector>

class City {
public:
    City(const std::string& name);
    City();
    void addSchool(const std::string &school);
    void addHospital(const std::string& hospital);
    void addFactory(const std::string& factory);

    std::string getName() const;
    std::vector<std::string> getSchools() const;
    std::vector<std::string> getHospitals() const;
    std::vector<std::string> getFactories() const;

private:
    std::string name;
    std::vector<std::string> schools;
    std::vector<std::string> hospitals;
    std::vector<std::string> factories;
};

#endif
