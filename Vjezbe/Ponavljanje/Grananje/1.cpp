#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Unesite broj!\n";
    unos:cin >> a;
    if(a == 0) {
        cout << "Broj mora bit razlicit od nule!\n";
        goto unos;
    }

    if(a > 0) cout << "Broj je pozitivan!";
    else cout << "Broj je negativan!";
    return 0;
}
/*
Napisati program koji omogućava unos broja različitog od 0,  te ispisuje poruku da li je broj pozitivan ili negativan
*/