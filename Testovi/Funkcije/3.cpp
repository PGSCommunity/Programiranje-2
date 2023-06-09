#include <iostream>
#include <cmath>
using namespace std;

void savrsenBroj(int x) {
    int suma(0);
    for(int i = 1; i < x; i++) {
        if(x % i == 0) suma += i;
    }

    if(suma == x) cout << "Broj je savrsen!\n";
    else cout << "Broj nije savrsen!\n";
}   

void prostBroj(int x) {
    bool prost = true;
    if (x <= 1) { 
        prost = false;
    } else {
        for(int i = 2; i <= sqrt(x); i++) {
            if(x % i == 0) {
                prost = false;
                break;
            }
        }
    }
    if(prost) {
        cout << "Broj je prost!\n";
    } else {
        cout << "Broj nije prost!";
    }
}

void armstrongovBroj(int x) {
    int originalniBroj, ostatak, rezultat = 0, n = 0;
    originalniBroj = x;
    while (originalniBroj != 0) {
        originalniBroj /= 10;
        ++n;
    }
    originalniBroj = x;
    while (originalniBroj != 0) {
        ostatak = originalniBroj % 10;
        rezultat += pow(ostatak, n);
        originalniBroj /= 10;
    }
    if(rezultat == x) {
        cout << "Broj je Armstrongov broj!\n";
    } else {
        cout << "Broj nije Armstrongov broj!\n";
    }
}

int main() {
    int x;
    cout << "Unesite broj!\n";
    cin >> x;

    savrsenBroj(x);
    prostBroj(x);
    armstrongovBroj(x);
    return 0;
}
/*
Napisati funkcije koje za uneseni cijeli broj ispituje i ispisuje poruku o tome da li je taj broj:
    I. Savrsen 
    II. Prost
    III. Armstrongov
*/