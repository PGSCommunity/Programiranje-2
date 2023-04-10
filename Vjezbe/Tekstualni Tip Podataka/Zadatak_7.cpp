#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Unesite znak!\n";
    cin >> c;
    cout << "Njegov prethodnik: " << (char)(c - 1) << '\n';
    cout << "Njegov sljedbenik: " << (char)(c + 1);
    return 0;
}
/*
Napisati program koji za uneseni znak ispisuje njegov prethodnik i sljedbenik.
*/