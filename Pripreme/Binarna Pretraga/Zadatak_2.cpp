#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,m;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }

    cout << "Unesite broj m!\n";
    unos:cin >> m;
    if(m > n) {
        cout << "Broj veci od velicine niza!\n";
        goto unos;
    }

    int l(0), d = n - 1;
    float p(1), suma(0);
    while(l <= d) {
        int s = (l + d) / 2;
        if(niz[s] < m) {
            p *= niz[s];
            l = s + 1;
        }
        else if(niz[s] > m) {
            suma += niz[s];
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }
    cout << "Geometrijska sredina do broja m: " << pow(p, 1/n) << '\n';
    cout << "Harmonijska sredina od broja m: " << n / suma;
    return 0;
}
/*
2.	Učitati N brojeva u niz, i broj M. Izračunati geometrijsku sredinu do broja M i harmonijsku sredinu brojeva od 
broja M.
*/