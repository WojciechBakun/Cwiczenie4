#ifndef analizator_hpp
#define analizator_hpp
#include <iostream>

class Analizator{
public:
    double dlugosc (const Sygnal& sygnal);
    double minimum (const Sygnal& sygnal);
    double maksimum (const Sygnal& sygnal);
    double srednia (const Sygnal& sygnal);
    double calka (const Sygnal& sygnal);
};

#endif
