#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n];
    int a[n], br(0);
    cout << "Unesite clanove niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
        if(niz[i] % 2 == 0) {
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

    cout << "Sortiran niz:\n";
    for(int i = 0; i < br; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int x;
    cout << "Unesite broj!\n";
    unos:cin >> x;
    if(x % 2 != 0) {
        cout << "Broj mora biti paran!\n";
        goto unos;
    }

    int poz(0);
    bool pronadjen(false);
    int l(0), d = br - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(x == a[s]) {
            pronadjen = true;
            poz = s;
            break;
        }
        else if(x < a[s]) {
            d = s - 1;
        }
        else {
            l = s + 1;
        }
    }

    if(pronadjen) cout << "Broj " << x << " se nalazi u nizu na poziciji: " << poz + 1;
    else cout << x << " nije u nizu!";
    return 0;
}
/*
Napisati program gdje se treba ucitati niz od n elemenata. Zatim se formira novi niz od parnih clanova prvog niza i
treba ih sortirati u rastucem poretku. Zatim treba se unjeti proizvoljni broj, koji treba bit paran. Treba vidjeti
je li unjeti broj paran, i na kojoj poziciji se on nalazi.
*/