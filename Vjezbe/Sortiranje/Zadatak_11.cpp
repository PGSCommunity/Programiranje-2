#include <iostream>
using namespace std;

struct ucenik {
    string ime;
    float prosjek;
};

int main() {
    int n;
    cout << "Koliko ucenika?\n";
    cin >> n;
    ucenik u[n];
    for(int i = 0; i < n; i++) {
        cout << "Unesite ime " << i + 1 << ". ucenika!\n";
        cin >> u[i].ime;
        cout << "Unestie prosjek " << i + 1 << ". ucenika!\n";
        cin >> u[i].prosjek;
        cout << "--------------------\n\n";
    }
    int tmax(0), poz(0);
    for(int i = 0; i < n; i++) {
        if(tmax < u[i].prosjek) {
            tmax = u[i].prosjek;
            poz = i;
        }
    }
    cout << "Ime ucenika sa najvecim prosjekom: " << u[poz].ime;
    cout << endl << '\n';

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(u[j].ime > u[j + 1].ime) {
                string temp = u[j + 1].ime;
                u[j + 1].ime = u[j].ime;
                u[j].ime = temp;
            }
            if(u[j].prosjek > u[j + 1].prosjek) {
                float temp = u[j + 1].prosjek;
                u[j + 1].prosjek = u[j].prosjek;
                u[j].prosjek = temp;
            }
        }
    }

    cout << "Sortirana imena:\n";
    for(int i = n - 1; i >= 0; i--) {
        cout << u[i].ime << " ";
    }
    cout << endl;
    cout << "Sortirani prosjeci:\n";
    for(int i = n - 1; i >= 0; i--) {
        cout << u[i].prosjek << " ";
    }
    return 0;
}
/*
Ucitati strukturu pod nazivom ucenik(ime, prosjek). Sortirati ime i prosjek u opadajucem poretku i 
ispisati ime ucenika sa najvecim prosjekom.
*/