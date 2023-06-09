#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x;
    cout << "Unesite dvocifreni broj!\n";
    unos:cin >> x;

    if(!(x >= 10 && x <= 99)) {
        cout << "Broj nije dvocifren! Pokusaj te ponovo!\n";
        goto unos;
    }

    if(x <= 50) {
        int suma(0);
        for(int i = 1; i <= x; i++) {
            suma += i;
        }
        cout << "Suma cifara: " << suma;
    } else {
        cout << "Kvadratni korijen broja: " << sqrt(x);
    }
    return 0;
}
/*
Napisati program koji omogucava unos dvocifrenog broja.
Ukoliko je broj manji ili jednak 50 racuna se i ispisuje suma njegovih cifara. Za broj veci od 50 racuna se i ispisuje kvadratni
korijen tog broja. Ukoliko broj nije dvocifren, ispisuje se adekvatna poruka i omogucava ponovni unos broja.
*/