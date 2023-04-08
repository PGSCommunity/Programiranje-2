#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n];
    cout << "Unesite clanove niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }

    cout << "Unesite broj x!\n";
    unos:cin >> x;
    if(x > n) {
        cout << "Broj x nemoze biti veci od velicine niza n!\n";
        goto unos;
    }

    int poz(0);
    bool pronadjen(false);
    int l(0), d = n - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(x == niz[s]) {
            pronadjen = true;
            poz = s;
            break;
        }
        else if(x < niz[s]) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }
    if(pronadjen) cout << "Broj " << x << " se nalazi na poziciji " << poz + 1;
    else cout << x << " nije u nizu!";
    return 0;
}
/*
Napisati program koji pronalazi broj x u nizu od n elemenata. (Koristit binarnu pretragu!)
*/