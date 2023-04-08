#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }

    int poz(0);
    bool pronadjen(false);
    for(int i = 0; i < n; i++) {
        if(niz[i] == 3) {
            pronadjen = true;
            poz = i;
            break;
        }
    }

    if(pronadjen) cout << "Niz sadrzi broj 3 i nalazi se na poziciji " << poz + 1;
    else cout << "Niz ne sadrzi broj 3!";
    return 0;
}
/*
Provjeriti da li niz sadrzi element 3! (Koristiti linearnu pretragu!)
*/