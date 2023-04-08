#include <iostream>
using namespace std;

void unos(int niz[7]) {
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < 7; i++) {
        cin >> niz[i];
    }
}

void sortiranje(int niz[7]) {
    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7 - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }
}

void ispis(int niz[7]) {
    cout << "Sortiran niz:\n";
    for(int i = 0; i < 7; i++) {
        cout << niz[i] << " ";
    }
}

int main() {
    int niz[7];
    unos(niz);
    sortiranje(niz);
    ispis(niz);
    return 0;
}
/*
Napisati program koji omogućava unos elemenata niza dimenzije 7. Članove niza je potrebno sortirati u obrnutom poretku
(od većeg elementa ka manjem). Program treba da sadrži 3 funkcije (unos, sortiranje, ispis).
*/