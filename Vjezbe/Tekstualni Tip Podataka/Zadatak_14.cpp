#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Unesite string!\n";
    getline(cin, str);

    string str1, str2;
    
    cout << "Unesite rijec sa umetanje!\n";
    getline(cin, str1);
    int a;
    cout << "Na kojoj poziciji?\n";
    cin >> a;
    cout << "Teksta sa umetnutnim tekstom:\n";
    cout << str.insert(a, str1);
    cout << endl << '\n';

    cout << "Unesite tekst za zamnjenu!\n";
    cin.ignore();
    getline(cin, str2);
    int b, c;
    cout << "Unesite pocetnu poziciji i broj znakova za zamjenu!\n";
    cin >> b >> c;
    cout << "Tekst za zamjenom teksta:\n";
    cout << str.replace(b, c, str2);
    cout << endl << '\n';

    int d, e;
    cout << "Unesite pocetnu poziciji i broj znakova za brisanje!\n";
    cin >> d >> e;
    cout << "Teksta za izbrisanim tekstom:\n";
    cout << str.erase(d, e);
    return 0;
}
/*
Ucitati niz znakova (string) pa:
-umetnuti tekst po vasem izboru
-zamjeniti tekst po vasem izboru
-brisanje teksta po vasem izboru
*/