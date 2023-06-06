#include <iostream>
using namespace std;

struct kompleksnibroj {
    float realniDio;
    float imaginarniDio;
} k;

kompleksnibroj unos() {
    cout << "Unesite realni broj:\n";
    cin >> k.realniDio;
    cout << "Unesite imaginarni broj:\n";
    cin >> k.imaginarniDio;
    return k;
}

kompleksnibroj zbirBrojeva(kompleksnibroj k1, kompleksnibroj k2) {
    kompleksnibroj zbir;
    zbir.realniDio = k1.realniDio + k2.realniDio;
    zbir.imaginarniDio = k1.imaginarniDio + k2.imaginarniDio;
    return zbir;
}

int main() {
    kompleksnibroj k1(unos()), k2(unos());
    kompleksnibroj zbir(zbirBrojeva(k1, k2));

    cout << "Zbir realnog dijela brojeva: " << zbir.realniDio << '\n';
    cout << "Zbir imaginarnog dijela brojeva: " << zbir.imaginarniDio; 
    return 0;
}
/*
Pomocu strukture definirati realni i imaginarni dio kompleksnog broja. Zatim ucitati dva kompleksna broja i izracunati njihov zbir
*/