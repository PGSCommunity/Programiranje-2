#include <iostream>
using namespace std;

int faktorijel(int n) {
    if(n == 0 || n == 1) return 1;
    return n * faktorijel(n - 1);
}

int main() {
    int n;
    cout << "Velicina niza:\n";
    cin >> n;
    int niz[n];
    cout << "Unos niza:\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    int x;
    cout << "Broj x:\n";
    unos:cin >> x;
    if(x > n) {
        cout << "X veci od velicine niza."; 
        goto unos;
    }
    int noviNiz[x];
    for(int i = 0; i < x; i++) {
        noviNiz[i] = faktorijel(niz[i]);
    }
    cout << "Ispis niza:\n";
    for(int i = 0; i < x; i++) {
        cout << noviNiz[i] << " ";
    }
    cout << endl;
    cout << "Sortiran niz:\n";
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x - 1 - i; j++) {
            if(noviNiz[j] > noviNiz[j + 1]) {
                int temp = noviNiz[j + 1];
                noviNiz[j + 1] = noviNiz[j];
                noviNiz[j] = temp;
            }
        }
    }
    for(int i = 0; i < x; i++) {
        cout << noviNiz[i] << " ";
    }
    return 0;
}
/*
3.	Napisati program koji omogućava deklaraciju proizvoljnog niza brojeva i unos prirodnog broja x (koji oznacava 
poziciju nekog broja u nizu), a zatim ispisuje faktorijele svih brojeva niza do broja x (uključujući i ta dva). 
Pri rješavanju zadatka kreirati funkciju "faktorijel", koja računa faktorijel primljenog broja. 
(varijacija: omogučiti korisničko definiranje niza i unosa broja kojem treba odrediti poziciju).
*/