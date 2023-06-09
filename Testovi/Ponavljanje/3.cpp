#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    unos:cin >> n;

    if(!(n >= 5)) {
        cout << "Velicina niza mora biti veca ili jednaka broju 5! Pokusaj te ponovo:\n";
        goto unos;
    }

    int niz[n];
    float suma(0);
    for(int i = 0; i < n; i++) {
        cout << "Unesite " << i + 1 << ". clan niza!\n";
        cin >> niz[i];
        suma += niz[i];
    }

    cout << "Prvi clan niza: " << niz[0] << '\n';
    cout << "Treci clan niza: " << niz[2] << '\n';
    cout << "Posljedni clan niza: " << niz[n - 1] << '\n';
    cout << "Aritmeticka sredina clanova niza: " << suma / n;
    return 0;
}
/*
Napisati program koji omogucava deklaraciju i unos clanova niza dimenzije n (n >= 5). Potom se ispisuje prvi, treci i posljedni
clan niza, te aritmeticka sredina clanova niza.
*/