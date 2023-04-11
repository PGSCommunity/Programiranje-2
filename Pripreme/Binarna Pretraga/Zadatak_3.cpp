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

    cout << "Unesite broj a i b!\n";
    unos:cin >> a >> b;
    if(a > b) {
        cout << "Netacan unos! (a < b):\n";
        goto unos;
    }

    int poz(0);
    bool pronadjen(false);
    int l(0), d = x - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(a == niz[s]) {
            poz = s;
            pronadjen = true;
            break;
        }
        else if(a < niz[s]) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }

    if(pronadjen) cout << "Broj a se nalazi na poziciji: " << poz + 1 << '\n';
    else cout << "Broj nije u nizu!\n";

    int pos(0);
    pronadjen = false;
    l = 0, d = x - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(b == niz[s]) {
            pos = s;
            pronadjen = true;
            break;
        }
        else if(b < niz[s]) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }

    if(pronadjen) cout << "Broj b se nalazi na poziciji: " << pos + 1 << '\n';
    else cout << "Broj nije u nizu!\n";

    float s(0), br(0);
    for(int i = poz; i < pos; i++) {
        s += niz[i];
        br++;
    }

    cout << "Aritmetika sredina brojeva izmedju pozicija a i b: " << s / br;
    return 0;
}
/*
3.	Učitati niz od X brojeva i dva prirodna broja a i b (a < b),  pa izračunati aritmetičku sredinu brojeva izmedju 
pozicija određenih brojevima a i b.
*/