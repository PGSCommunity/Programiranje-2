#include <iostream>
using namespace std;

int brojBrojeva(int n, int m) {
    int brojac(0);
    for(int i = n; i <= m; i++) {
        if(i % 10 == m) brojac++;
    }
    return brojac;
}

int proizvodBrojeva(int n, int m) {
    int proizvod(1);
    for(int i = n; i <= m; i++) {
        if(i % m != 0) proizvod *= i;
    }
    return proizvod;
}

int main() {
    int n, m;
    cout << "Unesite brojeve n i m!\n";
    cin >> n >> m;

    cout << "Broj brojeva cija je cifra jedinice jednaka m: " << brojBrojeva(n, m) << '\n';
    cout << "Proizvod brojeva koji nisu djeljivi sa m: " << proizvodBrojeva(n, m);
    return 0;
}
/*
Napisati program u kojem se nakon ucitavanja broja n i m (u main funkciji) pozivaju funkcije koje racunaju i vracaju sljedece
vrijednosti:
    -   Broj brojeva cija je cifra jedinice jednaka m
    -   Proizvod brojeva koji nisu djeljivi sa m
*/