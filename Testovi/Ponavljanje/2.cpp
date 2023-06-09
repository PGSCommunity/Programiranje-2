#include <iostream>
using namespace std;

int main() {
    size_t suma(0), proizvod(1);

    int i(100);

    while(i <= 999) {
        if(i % 2 == 0) {
            suma += i;
            proizvod *= i;
        }
        i++;
    }

    cout << "Suma parnih trocifrenih brojeva: " << suma << '\n';
    cout << "Proizvod parnih trocifrenih brojeva: " << proizvod;

    //Ovaj program ne moze izracunati proizvod, zato sto je broj previse visok.
    //Nema veze i ako koristimo size_t, ili long long int, uvijek ce ispisat da je proizvod 0 zbog previsokog broja.
    return 0;
}
/*
Napisati program koji racuna i ispisuje sumu i proizvod parnh trocifrenih brojeva (while petlja)
*/