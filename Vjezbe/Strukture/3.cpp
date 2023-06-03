#include <iostream>
using namespace std;

struct trougao {
    int osnovica;
    int visina;
} t;

trougao unos() {
    cout << "Unesite osnovicu!\n";
    cin >> t.osnovica;
    cout << "Unesite visinu!\n";
    cin >> t.visina;
    return t;
}

trougao visina(trougao t1, trougao t2) {
    float p1, p2;
    p1 = (t.osnovica * t.visina) / 2;
    p2 = (t.osnovica * t.visina) / 2;
    if(p1 > p2) cout << "Veci je: " << p1;
    else cout << "Veci je: " << p2;
}

int main() {
    trougao t1, t2;
    t1 = unos();
    t2 = unos();
    visina(t1, t2);
    return 0;
}
/*
Kreirati strukturu trougao sa atributima osnovica i visina. Kreirati dvije funkcije, unos i povrsina. Program racuna povrsine za
dva trougla i ispisuje povrsinu vece.
*/