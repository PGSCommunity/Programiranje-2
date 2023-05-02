#include <iostream>
using namespace std;

int IzracunajSumu(int N) {
    int n, s(0);
    for(int i = 1; i <= N; i++) {
        cout << "Unesite " << i << ". broj:\n";
        cin >> n;
        s += n;
    }
    return s;
}

int main() {
    int n;
    cout << "Unesite broj:\n";
    cin >> n;

    cout << IzracunajSumu(n);
    return 0;
}
/*
Napisati program koji ucitava broj N, nakon cega se poziva funkcija IzracunajSumu koja omogucava unos N brojeva i vraca 
vrijednost njihove sume.
*/