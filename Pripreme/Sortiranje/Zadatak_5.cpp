#include <iostream>
using namespace std;

struct SportskiKlub {
    int brIgraca;
    string prezime;
    float zarada;
};

void zaradaVecaOdMilion(SportskiKlub sk[], int n) {
    for(int i = 0; i < n; i++) {
        if(sk[i].zarada > 1000000) cout << sk[i].prezime << " ";
    }
}

void sortiranje(SportskiKlub sk[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(sk[j].brIgraca > sk[j + 1].brIgraca) {
                int temp = sk[j + 1].brIgraca;
                sk[j + 1].brIgraca = sk[j].brIgraca;
                sk[j].brIgraca = temp;
            }
            if(sk[j].prezime > sk[j + 1].prezime) {
                string temp = sk[j + 1].prezime;
                sk[j + 1].prezime = sk[j].prezime;
                sk[j].prezime = temp;
            }
            if(sk[j].zarada > sk[j + 1].zarada) {
                float temp = sk[j + 1].zarada;
                sk[j + 1].zarada = sk[j].zarada;
                sk[j].zarada = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Koliko sportkih klubova?\n";
    cin >> n;
    SportskiKlub sk[n];

    for(int i = 0; i < n; i++) {
        cout << "Unesite broj " << i + 1 << ". igraca!\n";
        cin >> sk[i].brIgraca;
        cout << "Unesite prezime " << i + 1 << ". igraca!\n";
        cin >> sk[i].prezime;
        cout << "Unesite zaradu " << i + 1 << ". igraca!\n";
        cin >> sk[i].zarada;
        cout << "====================\n";
    }

    cout << "Svi igraci cija je plata veca od milion dolara:\n";
    zaradaVecaOdMilion(sk, n);
    cout << endl << '\n';

    sortiranje(sk, n);

    cout << "Sortirana struktura:\n";
    for(int i = 0; i < n; i++) {
        cout << sk[i].brIgraca << " ";
    }
    cout << '\n';
    for(int i = 0; i < n; i++) {
        cout << sk[i].prezime << " ";
    }
    cout << '\n';
    for(int i = 0; i < n; i++) {
        cout << sk[i].zarada << " ";
    }
    return 0;
}
/*
5.	Kreirati strukturu podataka SportskiKlub ( br_igraca, prezime, zarada). Sortirati podatke prema svakom od 
navedenih člana strukture. Ispisati sve igrače kluba čija je plata veća od 1 000 000$. (koristiti funkcije)
*/