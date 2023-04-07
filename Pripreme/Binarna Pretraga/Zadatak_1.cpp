#include <iostream>
using namespace std;

int main() {
    int a,k;
    cout << "Velicina niza?\n";
    cin >> a;
    int niz[a];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < a; i++) {
        cin >> niz[i];
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }

    cout << "Unesite broj k!\n";
    unos:cin >> k;
    if(k > a) {
        cout << "Broj je veci od velicine niza!\n";
        goto unos;
    }

    float suma(0);

    int l(0), d = a - 1;
    while(l <= d) {
        int s = (l + d)/2;
        if(niz[s] < k && niz[s] % 2 == 0) {
            suma += 1.0/niz[s];
            l = s + 1;
        }
        else if(niz[s] >= k) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }
    cout << "Suma reciprocnih parnih brojeva manji od broja " << k << " je: " << suma;
	return 0;
}
/*
1.	Učitati A brojeva u niz, i broj k. Izračunati recipročnu vrijednost parnih brojeva manjih od broja k.
*/