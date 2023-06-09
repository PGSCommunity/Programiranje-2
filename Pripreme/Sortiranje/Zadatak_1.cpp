#include <iostream>
#include <cmath>
using namespace std;

void sort(int m) {
    int niz[m];
    cout << "Unesite clanove niza!\n";
    for(int i = 0; i < m; i++) {
        cin >> niz[i];
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }
    int tmax(0);
    cout << "Sortiran niz:\n";
    for(int i = 0; i < m; i++) {
        cout << niz[i] << " ";
        if(tmax < niz[i] && niz[i] < m) tmax = niz[i];
    }
    cout << '\n';
    cout << "Kub prvog manjeg od ucitanog broja m: " << pow(tmax, 3);
}

int main() {
    int m;
    cout << "Velicina niza?\n";
    cin >> m;
    sort(m);
    return 0;
}
/*
1.	Za učitanu dimenziju niza i cijeli broj m, Koristeci funkcije ispisati članove niza sortirane u rastućem poretku,
a zatim vrijednost kuba broja prvog manjeg od učitanog broja m.
*/