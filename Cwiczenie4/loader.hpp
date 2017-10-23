#ifndef loader_hpp
#define loeader_hpp
#include <iostream>

using namespace std;

class Loader{
public:
    Loader();
    Sygnal wczytajSygnal(string nazwa_pliku);
    void zapiszSygnal(Sygnal& sygnal, string nazwa_pliku);
};

#endif
