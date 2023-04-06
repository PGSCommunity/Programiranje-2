#include <iostream>
#include <string>
using namespace std;

struct Ucenik {
    string ime_prezime;
    int razred;
    float prosjek;
};

int main() {
    int n;
    cout << "Koliko ucenika?\n";
    cin >> n;
    Ucenik u[n];
    for(int i = 0; i < n; i++) {
        cin.ignore(); // sve praznine i karakteri novog reda ostaju u baferu, tako da će sljedeći poziv getline ispravno učitati string koji korisnik unosi.
        cout << "Unesite ime i prezime " << i + 1 << ". ucenika!\n";
        getline(cin, u[i].ime_prezime);
        cout << "Unesite razred " << i + 1 << ". ucenika!\n";
        cin >> u[i].razred;
        cout << "Unesite prosjek " << i + 1 << ". ucenika!\n";
        cin >> u[i].prosjek;
        cout << "--------------------\n\n";
    }

    cout << "Svi ucenici 2. razreda:\n";
    for(int i = 0; i < n; i++) {
        if(u[i].razred == 2) cout << u[i].ime_prezime << " ";
    }
    cout << '\n';
    float s(0), br(0);
    for(int i = 0; i < n; i++) {
        if(u[i].razred == 1) {
            s += u[i].prosjek;
            br++;
        }
    }
    cout << "Prosjek ucenika prvih razreda: " << s/br << '\n';
    cout << "Imena i prezima ucenika sa prosjekom 5.0:\n";
    for(int i = 0; i < n; i++) {
        if(u[i].prosjek == 5.0) cout << u[i].ime_prezime << " ";
    }
    cout << endl << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(u[j].ime_prezime > u[j + 1].ime_prezime) {
                string temp = u[j + 1].ime_prezime;
                u[j + 1].ime_prezime = u[j].ime_prezime;
                u[j].ime_prezime = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(u[j].razred > u[j + 1].razred) {
                int temp = u[j + 1].razred;
                u[j + 1].razred = u[j].razred;
                u[j].razred = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(u[j].prosjek > u[j + 1].prosjek) {
                float temp = u[j + 1].prosjek;
                u[j + 1].prosjek = u[j].prosjek;
                u[j].prosjek = temp;
            }
        }
    }

    cout << "Sortirana imena i prezimena ucenika:\n";
    for(int i = 0; i < n; i++) {
        cout << u[i].ime_prezime << " ";
    }
    cout << '\n';
    cout << "Sortirani razredi ucenika:\n";
    for(int i = 0; i < n; i++) {
        cout << u[i].razred << " ";
    }
    cout << '\n';
    cout << "Sortirani prosjeci ucenika:\n";
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