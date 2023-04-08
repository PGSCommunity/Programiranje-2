#include <iostream>
#include <algorithm>
using namespace std;

//Binarna pretraga

int main() {
    char niz[20];
    cout << "Unesite znakove niza!\n";
    for(int i = 0; i < 20; i++) {
        cin >> niz[i];
    }

    sort(niz, niz + 20); //Program ne ispisuje poziciju znaka '@' ako ne sortiramo niz.

    int poz(0);
    bool pronadjen(false);
    int l(0), d = 20 - 1;
    while(l <= d) {
        char s = (l + d) / 2;
        if(niz[s] == '@') {
            pronadjen = true;
            poz = (int)s;
            break;
        }
        else if('@' < niz[s]) {
            d = s - 1;
        }
        else { 
            l = s + 1;
        }
    }
    if(pronadjen) cout << "Element @ se nalazi na poziciji: " << poz + 1;
    else cout << "Element @ nije u nizu!";
    return 0;
}
/*
Napisati program koji sa standardnog ulaza unosi leksikografski uređen niz od maksimalno 20 znakova i provjerava da li
niz sadrži znak @. Zadatak uraditi na dva načina - koristeći linearnu pa binarnu pretragu.
*/