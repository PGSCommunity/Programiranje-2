#include <iostream>
using namespace std;

void sortiranje(int n[], int br) {
    for(int i = 0; i < br; i++) {
        for(int j = 0; j < br - 1 - i; j++) {
            if(n[j] > n[j + 1]) {
                swap(n[j], n[j + 1]);
            }
        }
    }
}

void ispis(int n[], int br) {
    cout << "Sortiran niz:\n";
    for(int i = 0; i < br; i++) {
        cout << n[i] << " ";
    }
}
int main() {
    int a;
    cout << "Velicina niza?\n";
    cin >> a;

    int niz[a], n[a];
    int br(0);
    cout << "Unesite clanove niza!\n";
    for(int i = 0; i < a; i++) {
        cin >> niz[i];
        if(niz[i] % 3 != 0) {
            n[br] = niz[i];
            br++;
        }
    }

    sortiranje(n, br);

    ispis(n, br);
    return 0;
}
/*
Koristeci funkcije potrebno je ucitati a clanova niza, a zatim izracunati i ispisati one clanove niza koji nisu djeljivi sa 3 u
rastucem poretku.
*/