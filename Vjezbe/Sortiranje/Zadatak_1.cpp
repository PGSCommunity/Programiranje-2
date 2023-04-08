#include <iostream>
using namespace std;

void unos(int n[5]) {
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < 5; i++) {
        cin >> n[i];
    }
}

void ispis(int niz[5]) {
    cout << "Sortiran niz:\n";
    for(int i = 0; i < 5; i++) {
        cout << niz[i] << " ";
    }
}
int main() {
    int niz[5];
    unos(niz);
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5 - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }
    ispis(niz);
    return 0;
}
/*
Napisati program koji sortira niz od 5 elemenata tako da sadrži i funkciju za unos, te funkciju za ispis elemenata 
niza nakon sortiranja.
*/