#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream ucenici("Ucenici.txt");
    ofstream prosjek("Prosjek.txt");
    if(!ucenici || !prosjek) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        string ime;
        int ocjena;
        float suma(0), brojac(0);
        for(int i = 0; i < 7; i++) {
            cout << "Unesite ime " << i + 1 << ". ucenika!\n";
            ucenici << "Upis podataka " << i + 1 << ". ucenika:\n";
            cin.ignore();
            getline(cin, ime);
            ucenici << "Ime: " << ime << '\n';
            cout << "Unesite ocjenu iz programiranja " << i + 1 << ". ucenika!\n";
            cin >> ocjena;
            ucenici << "Ocjena iz programiranja: " << ocjena << "\n\n";
            if(ocjena > 1) {
                suma += ocjena;
                brojac++;
            }
        }
        prosjek << "Prosjecna ocjena iz predmeta programiranja za navedene ucenike: " << suma / brojac;
    }
    return 0;
}
/*
Napisati program koji omogućava stvaranje datoteke „Ucenici.txt“ i upis imena učenika te  ocjene iz predmeta Programiranje za 7
učenika. Potom se u program pa datoteku „Prosjek.txt“ upisuje prosječna ocjena (aritmetička sredina) iz predmeta Programiranje 
za navedene učenike. U prosjek se ne uračunavaju nedovoljne ocjene.
*/