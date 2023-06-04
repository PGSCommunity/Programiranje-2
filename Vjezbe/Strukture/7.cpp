#include <iostream>
using namespace std;

struct ucenik {
    string ime;
    string prezime;
    int ocjena;
} u;

void ispisPodataka(ucenik u) {
    cout << "ISPIS PODATAKA UCENIKA:\n";
    cout << "Ime: " << u.ime << '\n';
    cout << "Prezime: " << u.prezime << '\n';
    cout << "Ocjena: " << u.ocjena << '\n';
}

int main() {
    cout << "Unesite ime ucenika!\n";
    cin >> u.ime;
    cout << "Unestie prezime ucenika!\n";
    cin >> u.prezime;
    cout << "Unesite ocjenu ucenika!\n";
    cin >> u.ocjena;
    ispisPodataka(u);
    return 0;
}
/*
Napisati program za unos i ispis podataka o ocjenama nekog učenika koristeći strukure
*/