#include <iostream>
using namespace std;

struct ucenik{
    string ime;
    int redniBr;
    int brTelefona;
};

int main() {
    ucenik u[3];
    for(int i = 0; i < 3; i++) {
        cout << "Unesite ime " << i + 1 << ". ucenika!\n";
        cin >> u[i].ime;
        cout << "Unesite redni broj " << i + 1 << ". ucenika!\n";
        cin >> u[i].redniBr;
        cout << "Unesite broj telefona " << i + 1 << ". ucenika!\n";
        cin >> u[i].brTelefona;
        cout << "--------------------\n\n";
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3 - 1 - i; j++) {
            //Sortiranje imena ucenika
            if(u[j].ime > u[j + 1].ime) {
                string temp = u[j + 1].ime;
                u[j + 1].ime = u[j].ime;
                u[j].ime = temp;
            }
            //Sortiranje rednih brojeva
            if(u[j].redniBr > u[j + 1].redniBr) {
                int temp = u[j + 1].redniBr;
                u[j + 1].redniBr = u[j].redniBr;
                u[j].redniBr = temp;
            }
            //Sortiranje brojeva telefona
            if(u[j].brTelefona > u[j + 1].brTelefona) {
                int temp = u[j + 1].brTelefona;
                u[j + 1].brTelefona = u[j].brTelefona;
                u[j].brTelefona = temp;
            }
        }
    }

    cout << "Sortiran niz od imena ucenika:\n";
    for(int i = 0; i < 3; i++) {
        cout << u[i].ime << '\n';
    }
    cout << endl;
    cout << "Sortiran niz od rednih brojeva:\n";
    for(int i = 0; i < 3; i++) {
        cout << u[i].redniBr << '\n';
    }
    cout << endl;
    cout << "Sortiran niz od brojeva telefona:\n";
    for(int i = 0; i < 3; i++) {
        cout << u[i].brTelefona << '\n';
    }
    return 0;
}
/*
Definirati strukturu 'ucenik' (ime, redni br. i br. telefona), zatim napisati program koji sadrži niz od tri učenika 
i omogučava unos pa sortirati podatke prema svakom od navedenih članova strukture.
*/