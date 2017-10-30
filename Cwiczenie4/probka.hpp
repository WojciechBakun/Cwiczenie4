#ifndef probka_hpp
#define probka_hpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class Probka{
public:
    double t, x;
    Probka();
    Probka(double t, x);
    friend ostream& operator<<(ostream& stream ,const Probka& probka);
};

#endif
