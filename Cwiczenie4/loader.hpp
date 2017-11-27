/**
 * @file loader.hpp
 * @author Wojciech Bakun
 * @date 12-11-2017
 *
 * @brief Plik zrodlowy dla klasy Loader
 *
 */

#ifndef Loader_hpp
#define Loader_hpp
#include "Sygnal.hpp"
#include <iostream>
#include <string>

/**
 * @class Loader
 * @brief Reprezentuje wczytanie danych z pliku i zapisanie ich do innego
 */
class Loader
{
public:
    Loader();
    Sygnal wczytaj(std::string nazwa_pliku);
    void zapiszSygnal(Sygnal& sygnal,std::string nazwa_pliku);

};


#endif // Loader_hpp
