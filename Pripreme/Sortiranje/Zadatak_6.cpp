#include <iostream>
#include <string>
using namespace std;

struct Ucenik {
    string imePrezime;
    int razred;
    float prosjek;
};

void ispisUvjeta(Ucenik u[], int n) {
    cout << "Svi ucenici drugog razreda:\n";
    for(int i = 0; i < n; i++) {
        if(u[i].razred == 2) cout << u[i].imePrezime << " ";
    }
    cout << endl;
    float s(0), br(0);
    for(int i = 0; i < n; i++) {
        if(u[i].razred == 1) {
            s += u[i].prosjek;
            br++;
        }
    }
    cout << "Prosjecna ocjena ucenika prvog razreda: " << s / br << '\n';
    cout << "Imena i prezimena ucenika sa prosjekom 5.0:\n";
    for(int i = 0; i < n; i++) {
        if(u[i].prosjek == 5.0) cout << u[i].imePrezime << " ";
    }
    cout << endl << '\n';
}

void sortiranje(Ucenik u[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(u[j].imePrezime > u[j + 1].imePrezime) {
                string temp = u[j + 1].imePrezime;
                u[j + 1].imePrezime = u[j].imePrezime;
                u[j].imePrezime = temp;
            }
            if(u[j].razred > u[j + 1].razred) {
                int temp = u[j + 1].razred;
                u[j + 1].razred = u[j].razred;
                u[j].razred = temp;
            }
            if(u[j].prosjek > u[j + 1].prosjek) {
                float temp = u[j + 1].prosjek;
                u[j + 1].prosjek = u[j].prosjek;
                u[j].prosjek = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Koliko ucenika?\n";
    cin >> n;

    Ucenik u[n];
    for(int i = 0; i < n; i++) {
        cin.ignore();
        cout << "Unesite ime i prezime " << i + 1 << ". ucenika!\n";
        getline(cin, u[i].imePrezime);
        cout << "Unesite razred " << i + 1 << ". ucenika!\n";
        cin >> u[i].razred;
        cout << "Unesite prosjek " << i + 1 << ". ucenika!\n";
        cin >> u[i].prosjek;
        cout << "====================\n\n";
    }

    ispisUvjeta(u, n);

    sortiranje(u, n);
    cout << "Sortirana struktura:\n";
    for(int i = 0; i < n; i++) {
        cout << u[i].imePrezime << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++) {
        cout << u[i].razred << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++) {
        cout << u[i].prosjek << " ";
    }
    return 0;   
}
/*
6.	Kreirati strukturu podataka Ucenik( ime_prezime, razred, prosjek). Sortirati podatke prema svakom od navedenih 
članova strukture. Ispisati sve učenike 2. razreda, prosjecnu ocjenu svih ucenika prvih razreda i imena i prezimena
ucenika svih razreda sa prosječnom ocjenom 5.0. (koristiti funkcije).
*/