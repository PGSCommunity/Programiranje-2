#include <iostream>
using namespace std;

void upis(int niz[], int n, int a[], int &br) {
    cout << "Unesite clanove niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
        if(niz[i] % 2 == 0 && niz[i] % 5 == 0) {
            a[br] = niz[i];
            br++;
        }
    }
}

void sortiranje(int a[], int br) {
    for(int i = 0; i < br; i++) {
        for(int j = 0; j < br - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}
 
void ispis(int a[], int br) {
    cout << "Sortiran niz:\n";
    for(int i = 0; i < br; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;

    int niz[n], a[n];
    int br(0);

    upis(niz, n, a, br);
    sortiranje(a, br);
    ispis(a, br);
    return 0;
}
/*
Koristeci funkcije potrebno je ucitati n clanova niza, a zatim izracunati i ispisati clanove niza koji su djeljivi i sa 2 i sa 5 u
rastucem poretku
*/