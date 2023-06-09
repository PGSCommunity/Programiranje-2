#include <iostream>
using namespace std;

struct slika {
    string ime;
    string autor;
    float cijena;
    int dimenzija;
};

int main() {
    int m;
    cout << "Koliko slika?\n";
    cin >> m;
    slika s[m];

    for(int i = 0; i < m; i++) {
        cout << "Unesite ime " << i + 1 << ". slike!\n";
        cin >> s[i].ime;
        cout << "Unesite autora " << i + 1 << ". slike!\n";
        cin >> s[i].autor;
        cout << "Unesite cijenu " << i + 1 << ". slike!\n";
        cin >> s[i].cijena;
        cout << "Unesite dimenziju " << i + 1 << ". slike!\n";
        cin >> s[i].dimenzija;
        cout << "====================\n\n"; 
    }

    int maximum(0), minimum(m);
    int index1(0), index2(0);

    for(int i = 0; i < m; i++) {
        if(maximum < s[i].cijena) {
            maximum = s[i].cijena;
            index1 = i;
        }
    }
    
    cout << "PODACI O NAJSKUPLJOJ SLICI:\n";
    cout << "Ime: " << s[index1].ime << '\n';
    cout << "Ime autora: " << s[index1].autor << '\n';
    cout << "Cijena slike: " << s[index1].cijena << '\n';
    cout << "Dimenzija slike " << s[index1].dimenzija << "\n\n";
    
    for(int i = 0; i < m; i++) {
        if(minimum > s[i].dimenzija) {
            minimum = s[i].dimenzija;
            index2 = i;
        }
    }

    cout << "NAZIV SLIKE NAJMANJE DIMENZIJE:\n";
    cout << s[index2].ime << "\n\n";

    cout << "IMENA AUTORA CIJA JE CIJENA SLIKE VECA OD 1,000$:\n";
    for(int i = 0; i < m; i++) {
        if(s[i].cijena > 1000) {
            cout << s[i].autor << '\n';
        }
    }
    return 0;
}
/*
Definirati strukturu slika (naziv slike, ime autora, cijena, dimenzija). Zatm za m unesenih slika ispisati:
    - Sve podatke o najskupljoj slici
    - Naziv slike najmanje dimenzije
    - Imena autora slika cija je cijena veca od 1,000$
*/