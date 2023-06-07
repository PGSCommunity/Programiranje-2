#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string ime;
    cout << "Unesite ime datoteke!\n";
    getline(cin, ime);

    ofstream ucitavanje(ime.c_str());
    if(!ucitavanje) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int niz[4];
        for(int i = 0; i < 4; i++) {
            cout << "Unesite " << i + 1 << ". broj!\n";
            cin >> niz[i];
            ucitavanje << niz[i] << '\n';
        }
    }
    return 0;
}
/*
Napisati program koji kreira datoteku korisnički definiranog naziva i omogućava učitavanje 4 broja u tu datoteku
*/