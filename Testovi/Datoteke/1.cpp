#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream brojevi("realnibrojevi.txt");
    if(!brojevi) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int broj, x;
        cout << "Unesite broj x:\n";
        cin >> x;
        cout << "Brojevi iz datoteke pomnozeni sa brojem x:\n";
        while(brojevi >> broj) {
            cout << broj * x << '\n';
        }
    }
    return 0;
}
/*
Napisati program koji iz postojece datoteke cita realne brojeve i ispisuje ih na ekran pomnozene sa x.
*/