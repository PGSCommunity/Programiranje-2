#include <iostream>
using namespace std;

struct ucenik {
    string ime;
    string prezime;
    float prosjek;
} u;

ucenik unos() {
    cout << "Unesite ime ucenika!\n";
    cin >> u.ime;
    cout << "Unesite prezime ucenika!\n";
    cin >> u.prezime;
    cout << "Unesite prosjek ucenika!\n";
    cin >> u.prosjek;
    return u;
}

void boljiProsjek(ucenik u1, ucenik u2) {
    if(u1.prosjek > u2.prosjek) cout << "Veci prosjek ima: " << u1.ime << " " << u1.prezime;
    else cout << "Veci prosjek ima: " << u2.ime << " " << u2.prezime;
}

int main() {
    ucenik u1(unos()), u2(unos());
    boljiProsjek(u1, u2);
    return 0;
}
/*
Pomocu strukture definisati i upisati ime, prezime te opci uspjeh za 2 ucenika. Ispisati ime i prezime ucenika koji ima bolji 
uspjeh!
*/