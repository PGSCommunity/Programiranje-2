#include <iostream>
#include <algorithm>
using namespace std;

struct Hidrometeorolska {
    string godisnje_doba;
    float temperatura;
    float padavine;
};

bool sortPremaPadavina(Hidrometeorolska a, Hidrometeorolska b) {
    return a.padavine < b.padavine;
}

void prosjecnaTemperatura(Hidrometeorolska h[], int n) {
    float s(0), br(0);
    for(int i = 0; i < n; i++) {
        if(h[i].godisnje_doba == "ljeto" || h[i].godisnje_doba == "Ljeto") {
            s += h[i].temperatura;
            br++;
        }
    }
    cout << "Prosjecna temperatura za godisnje doba ljeto: " << s / br;
}

void prvaManja(Hidrometeorolska h[], int n, int temp) {
    int poz(-1);
    for(int i = 0; i < n; i++) {
        if(h[i].temperatura < temp) {
            poz = i;
            break;
        }
    }

    if(poz == -1) {
        cout << "Nema mjerenja s temperaturom manjom od " << temp;
    }
    else {
        cout << "Prvo mjerenje s temperaturom manjom od: " << temp << ":\n";
        cout << "Godisnje doba: " << h[poz].godisnje_doba << "\n";
        cout << "Temperatura: " << h[poz].temperatura;
    }
}

int main() {
    int n;
    cout << "Velicina?\n";
    cin >> n;

    Hidrometeorolska h[n];
    for(int i = 0; i < n; i++) {
        cout << "Unesite godisnje doba\n";
        cin >> h[i].godisnje_doba;
        cout << "Unesite temperaturu\n";
        cin >> h[i].temperatura;
        cout << "Unesite padavine:\n";
        cin >> h[i].padavine;
        cout << "====================\n\n";
    }

    sort(h, h + n, sortPremaPadavina);

    cout << "Sort prema kolicini padavina:\n\n";
    cout << "Godisnja doba:\n";
    for(int i = 0; i < n; i++) {
        cout << h[i].godisnje_doba << " ";
    }
    cout << endl;
    cout << "Temperatura:\n";
    for(int i = 0; i < n; i++) {
        cout << h[i].temperatura << " ";
    }
    cout << endl << '\n';

    prosjecnaTemperatura(h, n);
    cout << endl << '\n';

    int temp;
    cout << "Unesite temperaturu!\n";
    cin >> temp;
    
    prvaManja(h, n, temp);
    return 0;
}
/*
Definisati strukturu Hidrometeorolska (godisnje_doba, temperatura, padavine).
Koristenjem funkcija nakon ucitavanja podataka ispisati:
- Podatke sortirane prema kolicini padavina
- Prosjecnu temperaturu za godisnje doba ljeto (prepostavlja se da je uneseno vise razlicitih vrijednosti za jedno godisnje doba)
- Godisnje doba i temperaturu prvu manju od korisnicki unesene
*/