#include <iostream>
using namespace std;

int sabiranje(int x, int y) {
    return x + y;
}

int oduzimanje(int x, int y) {
    return x - y;
}

int mnozenje(int x, int y) {
    return x * y;
}

int dijeljenje(int x, int y) {
    return x / y;
}

int main() {
    int a, b;
    char c;
    cout << "Unesite dva broja:\n";
    cin >> a >> b;
    cout << "Unesite znak za operaciju:\n";
    unos:cin >> c;

    switch(c) {
        case '+': 
            cout << sabiranje(a, b);
            break;
        case '-':
            cout << oduzimanje(a, b);
            break;
        case '*':
            cout << mnozenje(a, b);
            break;
        case '/':
            cout << dijeljenje(a, b);
            break;
        default:
            cout << "Netacan znak! Treba biti (+, -, *, /):\n";
            goto unos;
    }
    return 0;
}
/*
Napisati program za simulaciju rada kalkulatora za 4 osnovne operacije. Program treba da omogući korisniku unos dvije vrijednosti
i znaka za operaciju, a nakon toga se poziva adekvatna funkcija koja odgovara izboru korisnika na osnovu unesenog znaka. 
*/