#ifndef analizator_hpp
#define analizator_hpp
#include <iostream>
#include "sygnal.hpp"

class Analizator{
public:
    double Dlugosc (const Sygnal& sygnal);
    double Minimum (const Sygnal& sygnal);
    double Maksimum (const Sygnal& sygnal);
    double Srednia (const Sygnal& sygnal);
    double Calka (const Sygnal& sygnal);
};

#endif
