#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char c[100];
    cout << "Unesite tekst!\n";
    cin.getline(c, 100);

    int br1(0), br2(0);
    for(int i = 0; i < strlen(c); i++) {
        if(c[i] >= 65 && c[i] <= 90) br1++;
        if(c[i] >= 95 && c[i] <= 122) br2++;
    }

    cout << "Broj velikih slova: " << br1 << '\n';
    cout << "Broj malih slova: " << br2;
    return 0;
}
/*
Napisati program koji nakon unosa recenice (char), program ispisuje broj malih i velikih slova. Nesmiju se koristiti funkcije
(isupper i islower).
*/