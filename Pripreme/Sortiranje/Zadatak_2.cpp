#include <iostream>
using namespace std;

int tmax = 10;

int main() {
    int niz[tmax];
    int i(0), br(0), s(0);
    int ar(0);
    while(cin >> niz[i] && i < tmax) {
        if(niz[i] == 0) break;
        s += niz[i];
        i++;
        br++;
        if(br == 10) break;
    }
    ar = s / br;
    for(int i = 0; i < br; i++) {
        if(niz[i] < ar) {
            for(int j = 0; j < ar - 1 - i; j++) {
                if(niz[j] > niz[j + 1]) {
                    int temp = niz[j + 1];
                    niz[j + 1] = niz[j];
                    niz[j] = temp;
                }
            }
        }
    }
    for(int i = 0; i < br; i++) {
        if(niz[i] < ar) cout << niz[i] << " ";
    }
    return 0;
}
/*
2.	Učitavati realne brojeve sve dok ne unesemo broj 0 ili dok ne popunimo niz od 10 brojeva. 
Ispisati sve brojeve manje od aritmetičke sredine u rastućem poretku. 
*/