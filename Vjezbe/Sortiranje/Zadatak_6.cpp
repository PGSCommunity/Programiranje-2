#include <iostream>
using namespace std;

int main() {
    int niz[10];
    int x(0);
    float s(0), ar(0);
    cout << "Unesite elemente niza!\n";
    while(cin >> niz[x]) {
        s += niz[x];
        x++;
        ar = s / x;
        if(x == 10 || ar > 10) break;
    }

    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }
    
    cout << "Sortirani niz:\n";
    for(int i = 0; i < x; i++) {
        cout << niz[i] << " ";
    }
    return 0;
}
/*
U niz ucitavati realne brojeve sve dok im je aritmeticka sredina manja od 10 ili dok se ne popuni niz od 10 brojeva.
Zatim sortirati brojeve koristeci bubble sort.
*/