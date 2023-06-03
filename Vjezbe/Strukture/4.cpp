#include <iostream>
using namespace std;

struct zaposlenik {
    int broj;
    string ime;
    string prezime;
    string zanimanje;
    float plata;
};

int main() {
    zaposlenik z[5];

    for(int i = 0; i < 5; i++) {
        cout << "Unesite broj " << i + 1 << ". zaposlenika!\n";
        cin >> z[i].broj;
        cout << "Unesite ime " << i + 1 << ". zaposlenika!\n";
        cin >> z[i].ime;
        cout << "Unesite prezime " << i + 1 << ". zaposlenika!\n";
        cin >> z[i].prezime;
        cout << "Unesite zanimanje " << i + 1 << ". zaposlenika!\n";
        cin >> z[i].zanimanje;
        cout << "Unesite platu " << i + 1 << ". zaposlenika!\n";
        cin >> z[i].plata;
        cout << "====================\n\n"; 
    }

    for(int i = 0; i < 5; i++) {
        cout << "ISPIS PODATAKA " << i + 1 << ". ZAPOSLENIKA:\n\n";
        cout << "Broj: " << z[i].broj << '\n';
        cout << "Ime: " << z[i].ime << '\n';
        cout << "Prezime: " << z[i].prezime << '\n';
        cout << "Zanimanje: " << z[i].zanimanje << '\n';
        cout << "Plata: " << z[i].plata << '\n';
        cout << "====================\n\n"; 
    }
    return 0;
}
/*
Definirati strukturu 'zaposlenik' ( broj, ime, prezime, zanimanje, plata ), zatim napisati program koji sadrži niz od 5 
zaposlenika a koji omogućava unos pa ispis podataka definiranih strukturom za svakog od 5 zaposlenika.
*/