#ifndef putsys_h
#define putsys_h

#include<iostream>
#include<map>
#include<city.h>
#include<string>

class inputsys{
public:
    void addCity(const City &city);
    City getCity(const std::string &cityName) const;
    void inputCityInfo(City &city);

private:
    std::map<std::string, City> cities;
};

class outputsys{
public:
    void printcity(const std::string &cityName, const inputsys &inputsystem) const;
};

#endif