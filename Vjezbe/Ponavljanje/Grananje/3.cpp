#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cout << "Unesite broj a!\n";
    unos:cin >> a;
    if(a == 0) {
        cout << "Broj mora bit razlicit od nule!\n";
        goto unos;
    }

    if(a % 2 != 0) cout << "Dvostruka vrijednost unesenog broja: " << a * 2;
    else cout << "Kvadratni korijen unesenog broja: " << sqrt(a);
    return 0;
}
/*
Napisati program koji omogućava unos broja različitog od 0, ukoliko je broj neparan program računa i ispisuje njegovu dvostruku 
vrijednost, u suprotnom računa i ispisuje njegov kvadratni korijenen
*/