#include <iostream>
using namespace std;

int main() {
    int niz[10];
    int i(0), br(0), s(0);
    int ar(0);

    cout << "Unesite elemente niza!\n";
    while(i < 10) {
        cin >> niz[i];
        if(niz[i] == 0) break;
        s += niz[i];
        i++;
        br++;
        if(br == 10) break;
    }
    ar = s / br;
    for(int i = 0; i < ar; i++) {
        for(int j = 0; j < ar - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }
    cout << "Elementi niza manji od aritmeticka sredine niza sortirani:\n";
    for(int i = 0; i < ar; i++) {
        cout << niz[i] << " ";
    }
    return 0;
}
/*
2.	Učitavati realne brojeve sve dok ne unesemo broj 0 ili dok ne popunimo niz od 10 brojeva. 
Ispisati sve brojeve manje od aritmetičke sredine u rastućem poretku. 
*/