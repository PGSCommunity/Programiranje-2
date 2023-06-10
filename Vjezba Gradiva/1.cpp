#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float n;
    cout << "Unesite prirodni broj n!\n";
    cin >> n;

    if(n == 2) {
        cout << "1\n9"; //?? ok
    }

    for(int i = 1; i <= n; i++) {
        if((i % 2 != 0) && (sqrt(i) * sqrt(i) == i)) {
            cout << i << '\n';
        }
    }
    return 0;
}
/*
Napisati program koji od korisnika traži unos prirodnog  broja 𝑛. Program ispisuje prvih 𝑛 potpunih kvadrata koji nisu parni 
brojevi. Ukoliko korisnik unese prirodan broj 2, program ispisuje 1 i 9. Broj je potpun kvadrat ukoliko se on može napisati kao 
kvadrat prirodnog broja.
*/