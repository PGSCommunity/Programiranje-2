#include <iostream>
#include <algorithm>
using namespace std;

void upis(int niz[], int n) {
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
}

bool binarna(int niz[], int n, int x, int &poz) {
    int l(0), d = n - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(x == niz[s]) {
            poz = s;
            return true;
        }
        else if(x < niz[s]) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }
    return false;
}

void prviParni(int niz[], int poz, int n) {
    for(int i = poz; i < n; i++) {
        if(niz[i] % 2 == 0) {
            cout << "Prvi parni broj veci od pozicijie: " << niz[i];
            break;
        }
    }
}

int main() {
    int S, X;
    cout << "Velicina niza?\n";
    cin >> S;

    int niz[S];
    upis(niz, S);

    cout << "Unesite broj x!\n";
    cin >> X;

    int poz(0);
    if(binarna(niz, S, X, poz)) {
        cout << "Broj se nalazi na poziciji: " << poz + 1 << '\n';
    } else {
        cout << "Broj nije u nizu!\n";
    }
    
    prviParni(niz, poz, S);
    return 0;
}
/*
Koristeci funkcije napisati program pomocu kojeg je potrebno ucitati s brojeva u polje i nakon toga broj x koji se trazi u polju.
Ako se broj pojavljuje u polju, ispisati poziciju pojavljivanja prvog parnog brojav veceg od ucitanog broja x (Koristit binarnu
pretragu).
*/