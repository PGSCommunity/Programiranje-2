#include <iostream>
using namespace std;

struct ucenik {
    string ime;
    string prezime;
    int ocjena_testa;
};

int main() {
    int x;
    cout << "Koliko ucenika?\n";
    cin >> x;
    ucenik u[x];

    int br5(0), br4(0), br3(0), br2(0), br1(0);
    float suma(0), br(0);
    for(int i = 0; i < x; i++) {
        cout << "Unesite ime " << i + 1 << ". ucenika!\n";
        cin >> u[i].ime;
        cout << "Unesite prezime " << i + 1 << ". ucenika!\n";
        cin >> u[i].prezime;
        cout << "Unesite ocjenu sa testa " << i + 1 << ". ucenika!\n";
        unos:cin >> u[i].ocjena_testa;
        switch(u[i].ocjena_testa) {
            case 1:
                br1++;
                break;
            case 2:
                br2++;
                break;
            case 3:
                br3++;
                break;
            case 4:
                br4++;
                break;
            case 5:
                br5++;
                break;
            default:
                cout << "Pogresan unos! (1-5):\n";
                goto unos;
        }
        suma += u[i].ocjena_testa;
        cout << "====================\n\n";
    }
    br = br5 + br4 + br3 + br2 + br1;

    cout << "ISPIS UKUPNIH OCJENA:\n";
    cout << "Ukupan broj odlicnih ocjena: " << br5 << '\n';
    cout << "Ukupan broj vrlodobrih ocjena: " << br4 << '\n';
    cout << "Ukupan broj dobrih ocjena: " << br3 << '\n';
    cout << "Ukupan broj dovoljnih ocjena: " << br2 << '\n';
    cout << "Ukupan broj nedovoljnih ocjena: " << br1 << "\n\n"; 

    cout << "Prosjecna ocjena na testu: " << suma / br << "\n\n";

    cout << "Imena i prezimena ucenika koji su dobili odlicnu ocjenu:\n";
    for(int i = 0; i < x; i++) {
        if(u[i].ocjena_testa == 5) cout << u[i].ime << " " << u[i].prezime << '\n';
    }
    return 0;
}
/*
Definisati strukturu Ucenik ( ime, prezime, ocjena_testa). Napisati program koji za x ucenika ispisuje broj ucenika koji su
dobili odličnu, vrlodobru, dobru, dovoljnu i u konačnici nedovoljnu ocjenu na testu. Zatim ispisati prosječnu ocjenu na testu te
imena i prezimena učenika koji su dobili odličnu ocjenu.
*/