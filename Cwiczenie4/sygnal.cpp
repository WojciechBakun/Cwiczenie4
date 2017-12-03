/**
 * @file sygnal.cpp
 * @author Wojciech Bakun
 * @date 12-11-2017
 *
 * @brief Plik zrodlowy dla klasy Sygnal
 *
 * Plik zawiera dodanie probki, policzenie probek.
 */

#include "Sygnal.hpp"
#include <iostream>
#include <string>

Sygnal::Sygnal()
{

}
void Sygnal::dodajProbke(const Probka& p)
{
    probki.push_back(p);

}
int Sygnal::iloscProbek() const
{
    return probki.size();

}
Probka& Sygnal::operator[](int i)
{
    return probki[i];
}
const Probka& Sygnal::operator[](int i) const
{
    return probki[i];
}
