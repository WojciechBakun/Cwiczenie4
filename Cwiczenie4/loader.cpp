/**
 * @file loader.cpp
 * @author Wojciech Bakun
 * @date 12-11-2017
 *
 * @brief Plik zrodlowy dla klasy Loader
 *
 * Plik zawiera funkcje wczytujace dane z pliku (sygnalu) i zapisujace je w pliku o nazwie podanej w mainie.
 */

#include "Loader.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

Loader::Loader()
{
}
Sygnal Loader::wczytaj(string nazwa_pliku)
{
    Sygnal tablica;
    ifstream plik(nazwa_pliku);
    string linia;
    while(getline(plik,linia))
    {

        double x, t;
        stringstream ss(linia);
        ss>>t;
        ss.ignore();
        ss>>x;
        Probka probka1(t,x);
        tablica.dodajProbke(probka1);
    }
    plik.close();
    return tablica;

}
void Loader::zapiszSygnal(Sygnal& sygnal,string nazwa_pliku)
{
  ofstream zapis(nazwa_pliku);
    for(int i=0;i<sygnal.iloscProbek();i++)
    {
        zapis<<sygnal[i].x<<" "<<sygnal[i].t<<endl;
    }
    zapis.close();

}
