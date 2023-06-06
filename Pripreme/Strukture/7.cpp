#include <iostream>
using namespace std;

struct zeljeznicar {
    string prezime;
    int broj;
    string pozicija;
    int brojGolova;
};

int main() {
    zeljeznicar z[3];

    float suma(0);
    for(int i = 0; i < 3; i++) {
        cout << "Unesite prezime " << i + 1 << ". igraca!\n";
        cin >> z[i].prezime;
        cout << "Unesite broj " << i + 1 << ". igraca!\n";
        cin >> z[i].broj;
        cout << "Unesite poziciju " << i + 1 << ". igraca!\n";
        cin >> z[i].pozicija;
        cout << "Unesite broj golova " << i + 1 << ". igraca!\n";
        cin >> z[i].brojGolova;
        suma += z[i].brojGolova;
        cout << "====================\n\n";
    }

    cout << "Prezimena igraca sa neparnim brojem:\n";
    for(int i = 0; i < 3; i++) {
        if(z[i].broj % 2 != 0) cout << z[i].prezime << '\n';
    }
    cout << endl;

    int maximum(0);
    int index(0);
    for(int i = 0; i < 3; i++) {
        if(maximum < z[i].brojGolova) {
            maximum = z[i].brojGolova;
            index = i;
        }
    } 
    cout << "Najefikasniji igrac je " << z[index].prezime << " sa " << z[index].brojGolova << " postignutih golova\n\n";

    cout << "Prosjecan broj golova u klubu je: " << suma / 3 << "\n\n";

    for(int i = 0; i < 3; i++) {
        if(z[i].pozicija == "golman") {
            cout << "Prezime golmana: " << z[i].prezime << '\n';
            cout << "Broj golmana: " << z[i].broj << '\n';
        }
    }
    return 0;
}
/*
Definirati strukturu klub npr.'Željeznicar' (prezime(igraca),  broj (dres), pozicija,  broj golova), zatim napisati program koji 
sadrži niz od 11 igraca, omogucava unos podataka definiranih strukturom te ispis:
a) prezimena igraca sa neparnim brojem
b) najefikasnijeg igraca (broj postignutih golova)
c) prosjecan broj golova u klubu
d) sve podatke o igracu na poziciji golman.
*/