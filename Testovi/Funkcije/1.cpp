#include <iostream>
#include <cmath>
using namespace std;

void brojIme(int x) {
    if(x > 10) {
        cout << "Dvostruka vrijednost ucitanog broja: " << x * 2 << '\n';
    } else {
        cout << "Broj je manji od 10!\n";
    }
}

float brojPrezime(int x) {
    if(x < 50) {
        return sqrt(x);
    }
}

int main() {
    int x;
    cout << "Unesite broj!\n";
    cin >> x;

    brojIme(x);
    cout << brojPrezime(x);
    return 0;
}
/*
Napisati program u kojem se nakon ucitavanja cijelog broja pozivaju dvije funkcije:
    1. BrojIme ispisuje dvostruku vrijednost ucitanog broja ukoliko je broj veci od 10
    2. BrojPrezime vraca kvadratni korijen broja ako je broj manji od 50.
*/