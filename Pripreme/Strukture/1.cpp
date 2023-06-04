#include <iostream>
using namespace std;

struct ucenik {
    string ime;
    string prezime;
    float ocjenaMat;
    float ocjenaFiz;
    float ocjenaProg;
};

int main() {
    int n;
    cout << "Koliko ucenika?\n";
    cin >> n;
    ucenik u[n];

    for(int i = 0; i < n; i++) {
        cout << "Unesite ime " << i + 1 << ". ucenika!\n";
        cin >> u[i].ime;
        cout << "Unesite prezime " << i + 1 << ". ucenika!\n";
        cin >> u[i].prezime;
        cout << "Unesite ocjenu iz matematike " << i + 1 << ". ucenika!\n";
        cin >> u[i].ocjenaMat;
        cout << "Unesite ocjenu iz fizike " << i + 1 << ". ucenika!\n";
        cin >> u[i].ocjenaFiz;
        cout << "Unesite ocjenu iz programiranja " << i + 1 << ". ucenika!\n";
        cin >> u[i].ocjenaProg;
        cout << "====================\n\n";
    }

    for(int i = 0; i < n; i++) {
        cout << "ISPIS PODATAKA " << i + 1 << ". UCENIKA:\n\n";
        cout << "Ime: " << u[i].ime << '\n';
        cout << "Prezime: " << u[i].prezime << '\n';
        cout << "Prosjek: " << (u[i].ocjenaMat + u[i].ocjenaFiz + u[i].ocjenaProg) / 3 << '\n';
        cout << "====================\n\n";
    }
    return 0;
}
/*
Pomoću strukture definisati i ispisati ime, prezime učenika te ocjene iz Matematike, Fizike i Programiranja. Ispisati ime, 
prezime te prosječnu ocjenu iz navedenih predmeta.
*/