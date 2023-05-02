#include <iostream>
using namespace std;

int mojaFunkcija(int a) {
    return a + 10;
}

int main() {
    int x;
    cout << "Unesite broj:\n";
    cin >> x;

    cout << mojaFunkcija(x);
    return 0;
}
/*
Napisati program koji dodaje broj 10 na unijeti broj.
*/