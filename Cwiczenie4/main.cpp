#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "analizator.hpp"
#include "loader.hpp"
#include "loader.hpp"
#include "sygnal.hpp"

using namespace std;

/*struct Probka{
    double t;
    double x;
    Probka (double t1, double x1){
        t=t1;
        x=x1;
    }
};


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

void zapisz (string nazwa_pliku, Sygnal sygnal)
{
    ofstream zapis(nazwa_pliku);
    for(int i=0;i<sygnal.size();i++)
    {
        zapis<<sygnal[i].x<<" "<<sygnal[i].t<<endl;
    }
    zapis.close();
}

double Srednia (Sygnal sygnal) {
    double srednia = 0.0;
    for (int i = 0; i < sygnal.size(); i++) {
        srednia += sygnal[i].x;
    }
    if (sygnal.size() > 0) {
        srednia = srednia / sygnal.size();
    }
    return srednia;
}

double Minimum(Sygnal sygnal) {
    double minimum = 2;
    for ( int i=0; i<sygnal.size(); i++) {
        if (sygnal[i].x < minimum)
            minimum = sygnal[i].x;
    }
    return minimum;
}

double Maksimum(Sygnal sygnal) {
    double maksimum = -2;
    for ( int i=0; i<sygnal.size(); i++) {
        if (sygnal[i].x > maksimum)
            maksimum = sygnal[i].x;
    }
    return maksimum;
}

double Calka(Sygnal sygnal) {
    double calka = 0, dt = 0, dpole = 0;
    for (int i=1; i < sygnal.size()-1; i++)
    {
        dt = sygnal[i+1].x - sygnal[i].t;
        dpole = (sygnal[i].x + sygnal[i+1].x) * dt / 2;
        calka = calka + dpole;
    }
    return calka;
}*/

int main(int argc, char* argv[])
{
    if (argc !=2){
        return -1;
    }
    cout<<argv[1]<<endl;
    Sygnal sygnal = wczytaj(argv[1]);
    zapisz("out.csv", sygnal);
    cout<<endl<<"Srednia: "<<Srednia(sygnal);
    cout<<endl<<"Minimum: "<<Minimum(sygnal);
    cout<<endl<<"Maksimum: "<<Maksimum(sygnal);
    cout<<endl<<"Calka: "<<Calka(sygnal);
    return 0;
}
