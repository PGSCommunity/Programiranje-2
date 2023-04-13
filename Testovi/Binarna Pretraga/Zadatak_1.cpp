#include <iostream>
#include <algorithm>
using namespace std;

void upis(int niz[], int n) {
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    sort(niz, niz + n);
}

void suma(int niz[], int poz) {
    int s(0), br(0);
    for(int i = 0; i < poz; i++) {
        if(niz[i] % 2 == 0) {
            s += niz[i];
            br++;
        }
    }
    cout << "Suma parnih brojeva manjih od pozicije: " << s << '\n';
    cout << "Broj parnih brojeva manjih od pozicije: " << br;
}

bool binarna(int niz[], int n, int a, int &poz) {
    int l(0), d = n - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(a == niz[s]) {
            poz = s;
            return true;
        }
        else if(a < niz[s]) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }
    return false;
}

int main() {
    int n, a;
    cout << "Velicina niza?\n";
    cin >> n;

    int niz[n];
    upis(niz, n);

    cout << "Unesite broj a!\n";
    cin >> a;

    int poz(0);
    if(binarna(niz, n, a, poz)) {
        cout << "Broj se nalazi na poziciji: " << poz + 1 << '\n';
    } else {
        cout << "Broj nije u nizu!\n";
    }

    suma(niz, poz);
    return 0;
}
/*
Koristeci funkcije napisati program pomocu kojeg je potrebno ucitati n brojeva u polje i nakon toga broj A koji se trazi u polju.
Ako se broj pojavljuje u polju, izracunati i ispisati broj parnih elemenata manjih od broja A (Koristiti binarnu pretragu).
*/