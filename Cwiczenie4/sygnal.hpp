#ifndef sygnal_hpp
#define sygnal_hpp
#include <iostream>
#include <vector>

using namespace std;
class Sygnal{
private:
    typedef vector<Probka>;
public:
    Sygnal();
    void dodajProbke(const Probka& p);
    int iloscProbek();
    Probka& operator[](int i);
    friend ostream& operator<<( ostream& stream, const Sygnal& sygnal);
    };

#endif
