#include <iostream>
#include <string>
using namespace std;

int poz(string s1, string s2) {
    if(s1.find(s2)) return s1.find(s2);
    else return -1;
}

int main() {
    string s1, s2;
    cout << "Unesite prvi string!\n";
    getline(cin, s1);
    cout << "Unesite drugi string!\n";
    getline(cin, s2);

    cout << poz(s1, s2);
    return 0;
}
/*
Napisati funkciju koja vraca poziciju prvog pojavljivanja stringa s2 u stringu s1. Ako se string s2 ne nalazi u stringu s1 funkcija
kao rezultat vraca -1
*/