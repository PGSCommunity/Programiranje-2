#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n], a[n], b[n];
    int s(0), p(1), br1(0), br2(0);
    cout << "Unesite clanove niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
        if(niz[i] % 2 == 0) {
            a[br1] = niz[i];
            s += niz[i];
            br1++;
        }
        if(niz[i] % 2 != 0) {
            b[br2] = niz[i];
            p *= niz[i];
            br2++;
        }
    }

    cout << "Suma parnih brojeva: " << s << '\n';
    cout << "Proizvod neparnih brojeva: " << p << '\n';
    
    for(int i = 0; i < br1; i++) {
        for(int j = 0; j < br1 - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < br2; i++) {
        for(int j = 0; j < br2 - 1 - i; j++) {
            if(b[j] > b[j + 1]) {
                int temp = b[j + 1];
                b[j + 1] = b[j];
                b[j] = temp;
            }
        }
    }

    cout << "Sortirani parni brojevi:\n";
    for(int i = 0; i < br1; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Sortirani neparni brojevi:\n";
    for(int i = 0; i < br2; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
/*
Izracunati sumu parnih i proizvod neparnih od n ucitanih brojeva.Parne sortirati u rastucem a neparne u opadajucem 
poretku
*/