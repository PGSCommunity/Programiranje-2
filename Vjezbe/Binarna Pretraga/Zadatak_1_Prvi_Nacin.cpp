#include <iostream>
using namespace std;

//Linearna pretraga

int main() {
    char niz[20];
    cout << "Unesite niz znakova!\n";
    for(int i = 0; i < 20; i++) {
        cin >> niz[i];
    }
    
    int poz(0);
    bool pronadjen(false);
    for(int i = 0; i < 20; i++) {
        if(niz[i] == '@') {
            pronadjen = true;
            poz = i;
            break;
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