#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    fstream upis("petbrojeva.txt", ios::out);

    if(!upis) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int niz[5];
        for(int i = 0; i < 5; i++) {
            cout << "Unesite " << i + 1 << ". broj!\n";
            cin >> niz[i];
            upis << "Upis " << i + 1 << ". broja: " << niz[i] << '\n';
            upis << "Upis kvadrata " << i + 1 << ". broja: " << pow(niz[i], 2) << '\n';
        }
    }
    return 0;
}
/*
Napisati program koji pomoću klase „fstream“ i objekta kreira datoteku u koju se upisuje 5 brojeva i kvadrata tih brojeva
*/