#include <iostream>
#include <algorithm>
using namespace std;

struct Zaposlenik {
    string ime;
    string sektor;
    float plata;
};

bool sortPoPlati(Zaposlenik a, Zaposlenik b) {
    return a.plata < b.plata;
}

void prosjecnaPlata(Zaposlenik z[], int n) {
    float s(0), br(0);
    for(int i = 0; i < n; i++) {
        if(z[i].sektor == "IT") {
            s += z[i].plata;
            br++;
        }
    }
    cout << "Prosjecna plata u IT sektoru je: " << s / br << '\n';
}

void sortImena(Zaposlenik z[], int n, int p) {
    Zaposlenik a[n];
    int br(0);
    for(int i = 0; i < n; i++) {
        if(z[i].plata < p) {
            a[br].ime = z[i].ime;
            a[br].sektor = z[i].sektor;
            br++;
        }
    }
    for(int i = 0; i < br; i++) {
        for(int j = 0; j < br - 1 - i; j++) {
            if(a[j].ime > a[j + 1].ime) {
                swap(a[j].ime, a[j + 1].ime);
            }
            if(a[j].sektor > a[j + 1].sektor) {
                swap(a[j].sektor, a[j + 1].sektor);
            }
        }
    }
    cout << "Imena zaposlenika cija je plata manja od korisnicki unesene u obrnutim redoslijedom(i njihov sektor):\n";
    for(int i = br - 1; i >= 0; i--) {
        cout << a[i].ime << " iz sektora: " << a[i].sektor << "\n";
    }
}

int main() {
    int n;
    cout << "Koliko zaposlenika?\n";
    cin >> n;

    Zaposlenik z[n];
    for(int i = 0; i < n; i++) {
        cout << "Unesite ime " << i + 1 << ". zaposlenika!\n";
        cin >> z[i].ime;
        cout << "Unesite sektor " << i + 1 << ". zaposlenika!\n";
        cin >> z[i].sektor;
        cout << "Unesite platu " << i + 1 << ". zaposlenika!\n";
        cin >> z[i].plata;
        cout << "====================\n\n";
    }

    sort(z, z + n, sortPoPlati);
    cout << "Sort podataka prema plati:\n\n";
    cout << "Imena:\n";
    for(int i = 0; i < n; i++) {
        cout << z[i].ime << " ";
    } 
    cout << '\n';
    cout << "Sektor:\n";
    for(int i = 0; i < n; i++) {
        cout << z[i].sektor << " ";
    }
    cout << endl << '\n';

    prosjecnaPlata(z, n);

    int p;
    cout << "Unesite platu!\n";
    cin >> p;

    sortImena(z, n, p);
    return 0;
}
/*
Definisati strukturu Zaposlenik (ime, sektor, plata). Koristenjem funkcija nakon ucitavanja podataka ispisati:
- podatke sortirane prema visini plate - u rastucem redoslijedu
- prosjecnu platu u IT sektoru 
- imena zaposlenika u opadajucem poretku i pripadajuci sektor koji imaju platu manju od korisnicki unesene
*/