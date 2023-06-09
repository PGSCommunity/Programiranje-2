#include <iostream>
using namespace std;

struct valjak {
    float r;
    float h;
} v;

const float PI = 3.14;

valjak unosValjka() {
    cout << "Unesite poluprecnik valjka!\n";
    cin >> v.r;
    cout << "Unesite visinu valjka!\n";
    cin >> v.h;
    return v;
}

float ispisReciprocnePovrsine(valjak v1) {
    return 1 / (2 * v.r * PI * (v.r * v.h));
}

int main() {
    valjak v1(unosValjka());

    cout << "Reciprocna vrijednost povrsine valjka: " << ispisReciprocnePovrsine(v1);
    return 0;
}
/*
Definirati strukturu valjak (r i h). Zatim napisati program koji sadrzi dvije funkcije:
    1. Funkcija koja omogucava unos podataka definiranim strukturom
    2. Funkcija koja raca vrijednost povrsine valjka (P = 2rPI(r + h)).
Kao rezultat se ispisuje reciprocna vrijednost povrsine valjka.
*/