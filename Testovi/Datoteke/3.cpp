#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student {
    string ime;
    string prezime;
    int kolokvij1;
    int kolokvij2;
};

int main() {
    ifstream studenti("studenti.txt");
    ofstream rezultati("rezultati.txt");
    if(!studenti || !rezultati) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        string str;
        while(getline(studenti, str)) {
            student s;

            size_t pozicijaRazmaka = str.find(" ");
            if(pozicijaRazmaka == string::npos) {
                cout << "Pogresan format podakata!\n";
                continue;
            }

            s.ime = str.substr(0, pozicijaRazmaka);
            str = str.substr(pozicijaRazmaka + 1);

            pozicijaRazmaka = str.find(" ");
            if(pozicijaRazmaka == string::npos) {
                cout << "Pogresan format podataka!\n";
                continue;
            }

            s.prezime = str.substr(0, pozicijaRazmaka);
            str = str.substr(pozicijaRazmaka + 1);

            pozicijaRazmaka = str.find(" ");
            if(pozicijaRazmaka == string::npos) {
                cout << "Pogresan format podataka!\n";
                continue;
            }

            s.kolokvij1 = stoi(str.substr(0, pozicijaRazmaka));
            str = str.substr(pozicijaRazmaka + 1);

            s.kolokvij2 = stoi(str);    

            if (s.kolokvij1 > 24 && s.kolokvij2 > 24 && (s.kolokvij1 + s.kolokvij2) > 55) {
                rezultati << s.ime << " " << s.prezime << " " << s.kolokvij1 << " " << s.kolokvij2 << "\n";
            }
        }
    }
    //Ovo mi je trebalo ~sat da uradim, i profesor ocekuje da uradim za ~30 minuta + ostali zadaci? ok
    return 0;
}

/*
U fajlu studenti.txt nalazi se spisak studenata i osvojenih poena na kolokvijama (svaki student je u posebnom redu a zapisan je u
slijedecem obliku: ime, prezime, kolokvij1, kolokvij2). Svaki kolokvij nosi 50 poena. Student je polozio ispit ako na svakom 
kolokviju ima vise od 24, a u zbiru vise od 55 poena. Program treba da u fajl rezultati.txt upise one studente koji su polozili 
ispit.
*/