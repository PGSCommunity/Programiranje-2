#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Unesite recenicu!\n";
    getline(cin, str);
    
    string str1(str), poruka("Zdravo");
    cout << "Tekst sa umetnutom pozdravnom porukom na kraju:\n";
    cout << str1.append(poruka);
    cout << endl << '\n';

    string str2(str);
    for(int i = 0; i < str.size(); i++) {
        if(isspace(str2[i])) str2[i] = '*';
    }
    cout << "Ispis teksta tako da se svaki space mijenja u '*':\n";
    cout << str2;
    cout << endl << '\n';

    if(str.size() >= 20) {
        cout << "Substring teksta od 10. do 20. znaka:\n";
        cout << str.substr(10, 11);
        cout << endl << '\n';
    }
    else {
        cout << "String je manji od 20 znakova!\n";
        cout << endl << '\n';
    }
    return 0;
}
/*
    Ucitati niz znakova pa ispisati:
    1. Tekst sa umetnutom pozdravnom porukom na kraju (Zdravo)
    2. Ispisati taj niz znakova tako da se svaki space mijenja u *
    3. Substr od 10 do 20 znaka
    4. Poz pojavljivanja druge rijeci u tekstu
*/