#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k, x;
    cout << "Velicina niza?\n";
    cin >> k;
    int niz[k];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < k; i++) {
        cin >> niz[i];
    }

    sort(niz, niz + k);

    cout << "Unesite broj x!\n";
    cin >> x;

    int l(0), d = k - 1, poz(0);
    bool pronadjen(false);
    while(l <= d) {
        int s = (l + d) / 2;
        if(niz[s] == x) {
            pronadjen = true;
            poz = s;
            break;
        }
        else if(niz[s] > x) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }
    if(pronadjen) cout << "Pozicija broja " << x << " u nizu je: " << poz + 1 << '\n';
    else cout << "Nema broja " << x << " u nizu!\n";
    
    float suma(0), br(0);
    for(int i = 0; i < k; i++) {
        if(niz[i] > x) {
            suma += niz[i];
            br++;
        }
    }
    if(br > 0) cout << "Aritmeticka sredina brojeva vecih od " << x << ": " << suma / br;
    else cout << "Nema brojeva vecih od " << x << "!";
    return 0;
}
/*
Napisati program koji pronalazi element X u učitanom nizu dimenzije k – elementi niza su u neuređenom poretku.
Potom se računa suma elemenata većih od broja a.(binarna pretraga)
*/