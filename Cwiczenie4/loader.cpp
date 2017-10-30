#include "loader.hpp"
#include <iostream>

typedef vector<Probka> Sygnal;
Sygnal wczytaj (string nazwa_pliku)
{
    Sygnal tablica;
    ifstream plik(nazwa_pliku);
    string linia;
    while (getline(plik,linia))
    {
        double x,t;
        stringstream ss(linia);
        ss>>t;
        ss.ignore();
        ss>>x;
        Probka probka1(t,x);
        tablica.push_back(probka1);
    }
    plik.close();
    return tablica;
}
Loader::zapiszSygnal(string nazwa_pliku, Sygnal& sygnal)
{
    ofstream zapis(nazwa_pliku);
    for(int i=0;i<sygnal.size();i++)
    {
        zapis<<sygnal[i].x<<" "<<sygnal[i].t<<endl;
    }
    zapis.close();
}
