#include <iostream>
#include <algorithm>
using namespace std;

int faktorijel(int niz) {
    if(niz == 0 || niz == 1) return 1;
    return niz * (niz - 1);
}

int main() {
    int n, x;
    cout << "Velicina niza?\n";
    cin >> n;

    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }

    sort(niz, niz + n);

    cout << "Unesite broj x!\n";
    cin >> x;

    int poz(0);
    bool pronadjen(false);
    int l(0), d = n - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(x == niz[s]) {
            poz = s;
            pronadjen = true;
            break;
        }
        else if(x < niz[s]) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }

    if(pronadjen) cout << "Broj se nalazi na poziciji " << poz + 1 << '\n';
    else cout << "Broj nije u nizu!\n";
    cout << endl;

    for(int i = 0; i < poz; i++) {
        int fakt = faktorijel(niz[i]);
        cout << "Faktorijel broja " << niz[i] << " je: " << fakt << '\n';
    } 
    return 0;
}
/*
3.	Napisati program koji omogućava deklaraciju proizvoljnog niza brojeva i unos prirodnog broja x (koji oznacava poziciju nekog 
broja u nizu), a zatim ispisuje faktorijele svih brojeva niza do broja x (uključujući i ta dva). Pri rješavanju zadatka kreirati 
funkciju "faktorijel", koja računa faktorijel primljenog broja. (varijacija: omogučiti korisničko definiranje niza i unosa broja 
kojem treba odrediti poziciju).
*/