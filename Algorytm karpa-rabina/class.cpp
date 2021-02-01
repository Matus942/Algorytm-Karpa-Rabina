#include "class.h"

void rabin::wczytaj_dane()
{
    plik.open( "_pid80.dat", ios::in  );
    if( plik.good() == true )
    {
        cout << "Uzyskano dostep do pliku!" << endl;
        while (getline(plik, l))
        {
            M.push_back(l);
        }
    } else cout << "Dostep do pliku zostal zabroniony!" << endl;
    wzorzec[0] = M[1];
    lancuch[0] = M[3];


    return;
}
void rabin::konwersja()///dl_wz
{
    string str = M[0];
    istringstream iss(str);
    iss >> dl_wz ;
    return;
}

int rabin::hasz_wzorca() ///indeks 0 w vektorze = 6 ,1=wzorzec, 2 = 1000000 , 3 = lancuch
{
    int hw = 0;
    for(int i =0 ; i < dl_wz ; i++)///w ten sposob nie policzysz hasza brak konwersji (problem z lancuchem za duzy)
     ///stworzyc wektor lancuch i wczytac do niego lancuch znak po znaku okinko na miejsza liczba mozliwa do konwersji na liczbe
    {
        //hw=((hw*d) + wzorzec[i]);
        //hw%=k;
    }


    return hw;
}
int rabin::hasz_lancucha()
{
    int hl;
    for(int i =0 ; i < dl_wz ; i++)
    {
        //hl=((hl*d) + lancuch[i]);
        //hl%=k
    }
    return hl;
}
