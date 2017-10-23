#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Probka{
    double t;
    double x;
    Probka (double t1, double x1){
        t=t1;
        x=x1;
    }
};


typedef vector<Probka> Dane;
Dane wczytaj (string nazwa_pliku){
    Dane tablica;
    ifstream plik(nazwa_pliku);
    string linia;
    while (getline(plik, linia)) {
        double x, t;
        stringstream ss(linia);
        ss >> x;
        ss.ignore();
        ss >> t;
        Probka probka1(t,x);
        tablica.push_back(probka1);
        //cout <<x<<" "<<t<< endl;
    }
    plik.close();
    return tablica;
}

void zapisz (string nazwa_pliku, Dane dane){
    ofstream zap(nazwa_pliku);
    for (int i=0; i<dane.size(); i++){
        zap<<dane[i].t<<dane[i].x<<endl;
    }
    zap.close();

}

void dlugosc (string nazwa_pliku, Dane dane){
    ifstream wczy(nazwa_pliku);
    for (int i=0; i<dane.size(); i++){
        yyyy
    }
    wczy.close();

}

int main(int argc, char* argv[])
{
    if (argc !=2){
        return -1;
    }
    cout<<argv[1]<<endl;
    Dane dane = wczytaj(argv[1]);
    zapisz("out.csv", dane);
/*
    ifstream plik("sygnal.csv");
    string linia;
    while (getline(plik, linia)) {
        cout << linia << endl;
        double x, t;
        stringstream ss(linia);
        ss >> x;
        ss.ignore();
        ss >> t;
    }
    plik.close();
*/
/*
    ifstream plik("sygnal.csv");
    string linia;
    stringstream ss(linia);
    double x1, x2;
    ss >> x1;
    ss.ignore();
    ss >> x2;

    typedef pair<double, double> Probka;
    Probka probka1(0.1, 0.2);
    cout << probka1.first << endl;
    cout << probka1.second << endl;

    std::vector<Probka> dane;
    Probka probka1(0.1, 0.2);
    dane.push_back(probka1);
    dane.push_back(Probka(0.2, 0.3));
    cout << dane[0].first << ”, ” << dane[0].second;
*/
    return 0;
}
