#include <iostream>
#include <algorithm>
using namespace std;

int najveci_stepen(int n) {
    int br(0);
    while(n >= 2) {
        n /= 2;
        br++;
    }
    return br;
}

int main() {
    int k, b;
    cout << "Velicina niza?\n";
    cin >> k;

    int niz[k];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < k; i++) {
        cin >> niz[i];
    }

    sort(niz, niz + k);

    cout << "Unesite broj b!\n";
    cin >> b;

    int poz(0);
    bool pronadjen(false);
    int l(0), d = k - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(b == niz[s]) {
            poz = s;
            pronadjen = true;
            break;
        }
        else if(b < niz[s]) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }

    if(pronadjen) cout << "Broj se nalazi na poziciji: " << poz + 1 << '\n';
    else cout << "Broj nije u nizu!\n";
    cout << endl;

    int n(0);
    for(int i = 0; i < poz; i++) {
        n += niz[i];
    }
    
    cout << "Najveci stepen broja dva je: " << najveci_stepen(n);
    return 0;
}
/*
4.	Napisati program koji omogućava unos članova niza dimenzije k, i broja b. Potom se formira broj n koji predstavlja sumu brojeva
niza manjih od broja b (broj b nije uključen), a zatim se formira funkcija najveci_stepen koja prihvata prirodan broj n, a vraća 
najveći stepen broja 2 koji je manji ili jednak broju n. Primjer, za n=35 funkcija treba vratiti 5, jer je 32 najveći broj koji 
je stepen broja 2 (25=32), a koji je manji ili jednak n, tj. od 35. Nije dozvoljeno koristiti funkcije iz biblioteke cmath.
*/