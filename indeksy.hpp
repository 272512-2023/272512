#include <vector>
#include <string>
using namespace std;
class Klasa{
    private:
        vector<int>indeksy;
        vector<string>imiona;
        vector<int>pesel;
    public:
    int getindeksy(){// tutaj pozmianieja zeby z konkretnej pozycji podawal ci ze ktos daje numer i wyswietlasz wszystkie inforamce
        int indeks;
        indeksy.push_back(indeks);
        return indeks;
    }
    string getlina(){
        string imie;
        imie = imiona.back();
        return imie;
    }
    void setimie(string imie){
        imiona.push_back(imie);
    }
    int getpesel(){
        int numer;
        numer = pesel.back();
        return numer;
  
    }
    int SetPesel(int PESEL){
        int couter=0;
        while(couter);
        {
            PESEL = PESEL/10;
            couter++;
        }
        if(couter == 11){
            pesel.push_back(PESEL);
            return 0;//jest poprawny
        }
        return 1; //jest za krotki
        return 2; // jest za dlugi
    }
    int getwiek(){// tutaj obliczanie wieku z peselu ma byc
    }

};