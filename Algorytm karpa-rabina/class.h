#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>


using namespace std;

class rabin
{
private:
    vector<string>M;
    string lancuch[2];
    string wzorzec[2];
    int d = 10; ///liczba znakow alfabetu
    int dl_wz;
    int k = 9551;
    fstream plik;
    string l;



public:
    void wczytaj_dane();
    void konwersja();
    int hasz_wzorca();
    int hasz_lancucha();

};
#endif // CLASS_H


