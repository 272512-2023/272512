#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include "indeksy.hpp"
#include "dodawanie_student.hpp"
#include "odejmowanie_studenta.hpp"
using namespace std;
int main(){
    while(true){
        cout << "Co chcesz zrobic? "<< endl;
        int akcja;
        cin >> akcja;
        Klasa DODAWANIE;
        Klasa ODEJMOWANIE;
        switch (akcja){
            case 0:
                return 0;
            case 1:
                dodawanie_student(DODAWANIE.indeksy);
                break;
            case 2:
                //odejmowanie_studenta(ODEJMOWANIE.indeksy);
                break;
            case 3:
                //int rozmiar = DODAWANIE.indeksy.size();
                //cout << rozmiar << endl;
                break;
        }
    }
    return 0;
    
}