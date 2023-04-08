#include <iostream>
using namespace std;

int main() {
    int niz[8];
    int x(0);
    float s(0), ar(0);
    cout << "Unesite clanove niza!\n";
    while(cin >> niz[x]) {
        s += niz[x];
        if(niz[x] == 0) break;
        x++;
        if(x == 8) break;
    }
    ar = s / x;
    
    int a[x], br(0);
    for(int i = 0; i < x; i++) {
        if(niz[i] > ar) {
            a[br] = niz[i];
            br++;
        }
    }

    for(int i = 0; i < br; i++) {
        for(int j = 0; j < br - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Brojevi veci od ariteticke sortirani u rastucem poretku:\n";
    for(int i = 0; i < br; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
/*
U niz ucitavati brojeve dok se ne unese 0 ili dok ne popunimo niz od 8 brojeva.Ispisati sve brojeve vece od 
aritmeticke sredine u rastucem poretku.
*/