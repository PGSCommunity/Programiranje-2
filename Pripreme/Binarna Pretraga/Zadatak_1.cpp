#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, k;
    cout << "Velicina niza?\n";
    cin >> a;

    int niz[a];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < a; i++) {
        cin >> niz[i];
    }

    sort(niz, niz + a);

    cout << "Unesite broj k!\n";
    cin >> k;

    int poz(0);
    bool pronadjeno(false);
    int l(0), d = a - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(k == niz[s]) {
            poz = s;
            pronadjeno = true;
            break;
        }
        else if(k < niz[s]) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }
    
    if(pronadjeno) cout << "Broj se nalazi na poziciji: " << poz + 1 << '\n';
    else cout << "Broj nije u nizu!\n";

    float suma(0);
    for(int i = 0; i < poz; i++) {
        if(niz[i] % 2 == 0) {
            suma += 1.0/niz[i];
        }
    }
    cout << "Reciprocna vrijednost parnih brojeva manjeg od broja k: " << suma;
    return 0;
}
/*
1.	Učitati A brojeva u niz, i broj k. Izračunati recipročnu vrijednost parnih brojeva manjih od broja k.
*/