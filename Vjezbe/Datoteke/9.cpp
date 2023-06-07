#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream prva("prva.txt");
    fstream druga("druga.txt", ios::out);
    if(!prva) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int niz[10];
        int suma(0), proizvod(1);
        for(int i = 0; i < 10; i++) {
            cout << "Unesite " << i + 1 << ". broj!\n";
            cin >> niz[i];
            prva << niz[i] << " ";
            if(niz[i] >= 1 && niz[i] <= 9) proizvod *= niz[i];
            if(niz[i] >= 10 && niz[i] <= 99) suma += niz[i];
        }
        druga << proizvod << '\n';
        druga << suma << '\n';
        druga.close();
        druga.open("druga.txt", ios::in);
        int broj;
        while(druga >> broj) cout << broj << '\n';
    }
    return 0;
}
/*
Napisati program koji korisniku omogucava upis 10 brojeva u datoteku "prva.txt".
Zatim se u datoteku "druga.txt" u prvi red upisuje proizvod jednocifrenih a u drugi red suma dvocifrenih brojeva.
Na kraju se podaci iz datoteke druga.txt ispisuju na ekran
*/