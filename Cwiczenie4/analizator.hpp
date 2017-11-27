/**
 * @file Analizator.hpp
 * @author Wojciech Bakun
 * @date 12-11-2017
 *
 * @brief Plik naglowkowy dla klasy Analizator
 *
 */

#ifndef Analizator_hpp
#define Analizator_hpp
#include "Sygnal.hpp"
#include <iostream>
#include <string>

/**
 * @class Analizator
 * @brief Reprezentuje wyniki obliczen na sygnale
 */
class Analizator{
public:
    /**
     * @brief Kontruktor.
     * @param dlugosc [in] dlugosc sygnalu
     * @param minimum [in] minimalna wartosc sygnalu
     * @param maksimum [in] maksymalna wartosc sygnalu
     * @param srednia [in] srednia wartosc sygnalu
     * @param calka [in] calka z sygnalu
     */
    Analizator();
    double dlugosc(const Sygnal& sygnal);
    double minimum (const Sygnal& sygnal);
    double maksimum (const Sygnal& sygnal);
    double srednia(const Sygnal& sygnal);
    double calka(const Sygnal& sygnal);
};

#endif // analizator_hpp
