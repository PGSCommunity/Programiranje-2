#include <iostream>
#include <string>
using namespace std;

struct SportskiKlub {
    int br_igraca;
    string prezime;
    float zarada;
};

int main() {
    SportskiKlub igraci;
    cout << "Broj igraca?\n";
    cin >> igraci.br_igraca;

    SportskiKlub sp[igraci.br_igraca];
    for(int i = 0; i < igraci.br_igraca; i++) {
        cout << "Unesite prezime " << i + 1 << ". igraca!\n";
        cin >> sp[i].prezime;
        cout << "Unesite zaradu " << i + 1 << ". igraca!\n";
        cin >> sp[i].zarada;
    }

    for(int i = 0; i < igraci.br_igraca; i++) {
        for(int j = 0; j < igraci.br_igraca - 1 - i; j++) {
            if(sp[j].prezime > sp[j + 1].prezime) {
                string temp = sp[j + 1].prezime;
                sp[j + 1].prezime = sp[j].prezime;
                sp[j].prezime = temp;
            }
        }
    }
    for(int i = 0; i < igraci.br_igraca; i++) {
        for(int j = 0; j < igraci.br_igraca - 1 - i; j++) {
            if(sp[j].zarada > sp[j + 1].zarada) {
                float temp = sp[j + 1].zarada;
                sp[j + 1].zarada = sp[j].zarada;
                sp[j].zarada = temp;
            }
        }
    }

    cout << "Prezimena sortirana:\n";
    for(int i = 0; i < igraci.br_igraca; i++) {
        cout << sp[i].prezime << " ";
    }
    cout << '\n';
    cout << "Zarada sortirana:\n";
    for(int i = 0; i < igraci.br_igraca; i++) {
        cout << sp[i].zarada << " ";
    }

    cout << '\n';
    cout << "Igraci cija je zarada veca od milion:\n";
    for(int i = 0; i < igraci.br_igraca; i++) {
        if(sp[i].zarada > 1000000) cout << sp[i].prezime << '\n';
    }
    return 0;
}
/*
5.	Kreirati strukturu podataka SportskiKlub ( br_igraca, prezime, zarada). Sortirati podatke prema svakom od 
navedenih člana strukture. Ispisati sve igrače kluba čija je plata veća od 1 000 000$. (koristiti funkcije)
*/