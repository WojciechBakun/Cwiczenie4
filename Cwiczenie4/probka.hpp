/**
 * @file probka.hpp
 * @author Wojciech Bakun
 * @date 12-11-2017
 *
 * @brief Plik naglowkowy dla klasy Probka
 *
 */

#ifndef Probka_hpp
#define Probka_hpp
#include <iostream>
#include <string>

/**
 * @class Probka
 * @brief Tworzy obiekt probki skladajacy sie z czasu (t) i wartosci probki (x)
 */
class Probka
{
    public:
    double t,x;
    Probka();
    Probka(double t1, double x1);
    friend std::ostream& operator<<(std::ostream& stream,const Probka& probka );
};

#endif // Probka_hpp
