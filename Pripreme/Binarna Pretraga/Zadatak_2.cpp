#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cout << "Velicina niza?\n";
    cin >> n;

    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }

    cout << "Unesite broj m!\n";
    cin >> m;

    int poz(0);
    bool pronadjeno(false);
    int l(0), d = n - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(m == niz[s]) {
            poz = s;
            pronadjeno = true;
            break;
        }
        else if(m < niz[s]) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }

    if(pronadjeno) cout << "Broj se nalazi na poziciji: " << poz + 1 << '\n';
    else cout << "Broj nije u nizu!\n";

    float s(0), p(1);
    for(int i = 0; i < poz; i++) {
        p *= niz[i];
    }
    for(int i = poz; i < n; i++) {
        s += niz[i];
    }
    cout << "Geometrijska sredina do broja m: " << pow(p, 1/n) << '\n';
    cout << "Harmonijska sredina od broja m: " << n / s;
    return 0;
}
/*
2.	Učitati N brojeva u niz, i broj M. Izračunati geometrijsku sredinu do broja M i harmonijsku sredinu brojeva od 
broja M.
*/