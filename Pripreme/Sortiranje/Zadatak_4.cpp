#include <iostream>
using namespace std;

int najveci_stepen(int n) {
    int n1(0);
    while (n >= 2) {
        n /= 2;
        n1++;
    }
    return n1;
}

int main() {
    int k,b;
    cout << "Velicina niza:\n";
    cin >> k;
    int niz[k];
    cout << "Unos niza:\n";
    for(int i = 0; i < k; i++) {
        cin >> niz[i];
    }
    cout << "Broj b:\n";
    unos:cin >> b;
    if(b > k) {
        cout << "B je veci od velicine niza.\n";
        goto unos;
    }
    int n(0);
    for(int i = 0; i < b - 1; i++) {
        n += niz[i];
    }
    cout << najveci_stepen(n);
    return 0;
}
/*
4.	Napisati program koji omogućava unos članova niza dimenzije k, i broja b. Potom se formira broj n koji predstavlja
 sumu brojeva niza manjih od broja b (broj b nije uključen), a zatim se formira funkcija najveci_stepen koja prihvata 
 prirodan broj n, a vraća najveći stepen broja 2 koji je manji ili jednak broju n. 
 Primjer, za n=35 funkcija treba vratiti 5, jer je 32 najveći broj koji je stepen broja 2 (25=32), a koji je manji ili
 jednak n, tj. od 35. Nije dozvoljeno koristiti funkcije iz biblioteke cmath.
*/