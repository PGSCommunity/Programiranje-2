#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Unesite broj!\n";
    unos:cin >> a;
    if(a == 0) {
        cout << "Broj mora bit razlicit on nule!\n";
        goto unos;
    }

    if(a > 100) cout << "Broj je veci od 100!";
    else cout << "Broj je manji od 100!";
    return 0;
}
/*
Napisati program koji omogućava unos realnog broja različitog od 0,  te ispisuje poruku da li je broj veći ili manji od 100
*/