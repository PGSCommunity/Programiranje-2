#include <iostream>
using namespace std;

struct datum {
    int dan;
    int mjesec;
    int godina;
} d;

datum unosDatuma() {
    cout << "Unesite dan:\n";
    cin >> d.dan;
    cout << "Unesite mjesec:\n";
    cin >> d.mjesec;
    cout << "Unesite godinu:\n";
    cin >> d.godina;
    cout << '\n';
    return d;
}

datum ispisDatuma() {
    cout << d.dan << "." << d.mjesec << "." << d.godina;
}

int main() {
    datum d1 = unosDatuma();
    ispisDatuma();
    return 0;
}
/*
Kreirati strukturu pod nazivom datum sa atributima dan, mjesec i godina kreirati funkciju za unos i ispis datuma
*/