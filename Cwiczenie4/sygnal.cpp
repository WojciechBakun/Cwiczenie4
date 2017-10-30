#include "sygnal.hpp"
#include "probka.hpp"
#include "loader.hpp"
#include "analizator.hpp"

using namespace std;

void dodajProbke();



/*typedef vector<Probka> Sygnal;
vector <Probka> wczytaj (const string nazwa_pliku&)
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
}*/
