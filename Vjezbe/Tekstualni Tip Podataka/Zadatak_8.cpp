#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Unesite veliko slovo!\n";
    cin >> c;
    cout << "Veliko slovo ispisano kao malo slovo: " << (char)(c + 32);
    return 0;
}
/*
Upotrebom aritmetike (koristeći ASCII tablicu) napisati program koji za uneseno veliko slovo ispisuje malo slovo.
*/