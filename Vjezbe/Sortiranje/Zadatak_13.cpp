#include <iostream>
using namespace std;

int main() {
    int niz[8];
    cout << "Unesite clanove niza!\n";
    for(int i = 0; i < 8; i++) {
        cin >> niz[i];
    }
    
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8 - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }
    cout << "Prvih 5 clanova sortirani uzlazno:\n";
    for(int i = 0; i < 5; i++) {
        cout << niz[i] << " ";
    }
    cout << endl;
    cout << "Posljednja 3 clana sortirana silazno:\n";
    for(int i = 8 - 1; i >= 5; i--) {
        cout << niz[i] << " ";
    }
    return 0;
}
/*
Ucitati 8 clanova niza, prvih 5 sortirati uzlazno a poslijednja 3 silazno
*/