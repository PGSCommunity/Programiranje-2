#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Unesite dva broja:\n";
    cin >> x >> y;

    int z = suma(x, y);
    cout << z;
    return 0;
}
/*
Napisati program koji sabira dva broja. Funkciju deklarisati u varijabli i potom je tako ispisati.
*/