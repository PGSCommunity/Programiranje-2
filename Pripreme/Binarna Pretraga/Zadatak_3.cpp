#include <iostream>
using namespace std;

int main() {
    int x, a, b;
    cout << "Velicina niza?\n";
    cin >> x;
    int niz[x];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < x; i++) {
        cin >> niz[i];
    }

    cout << "Unesite brojeve a i b!\n";
    unos:cin >> a >> b;
    if(b < a) {
        cout << "Necatan upis! Treba biti (a < b)!\n";
        goto unos;
    }

    float suma(0), br(0);
    int l(0), d = x - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(niz[s] > a) {
            suma += niz[s];
            br++;
            l = s + 1;
        }
        else if(niz[s] < b) {
            suma += niz[s];
            br++;
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }
    cout << "Aritmeticka sredina izmedju brojeva a i b: " << suma / br;
    return 0;
}
/*
3.	Učitati niz od X brojeva i dva prirodna broja a i b (a < b),  pa izračunati aritmetičku sredinu brojeva izmedju 
pozicija određenih brojevima a i b.
*/