#include <iostream>
using namespace std;

int main() {
    int niz[7];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < 7; i++) {
        cin >> niz[i];
    }

    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7 - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }

    cout << "Sortiran niz:\n";
    for(int i = 0; i < 7; i++) {
        cout << niz[i] << " ";
    }
    return 0;
}
/*
Učitati 7 brojeva u polje. Sortirati ih ulazno i ispisati sortirano polje!
*/