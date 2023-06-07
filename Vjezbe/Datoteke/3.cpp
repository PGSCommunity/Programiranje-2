#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream brojevi("brojevi.txt");
    if(!brojevi) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int broj;
        while(brojevi >> broj) cout << broj << " ";
    }
    return 0;
}
/*
Kreirati datoteku „brojevi.txt“ u koju je potrebno sačuvati brojeve iz intervala 1 – 10.
Napisati program koji učitava te brojeve u jednom redu razdvojene razmakom
*/