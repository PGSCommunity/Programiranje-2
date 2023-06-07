#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream unos("upisbrojeva.txt", ios::out);
    fstream ispis("ispisbrojeva.txt", ios::out);
    if(!unos || !ispis) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int niz[5];
        for(int i = 0; i < 5; i++) {
            cout << "Unesite " << i + 1 << ". broj!\n";
            cin >> niz[i];
            unos << niz[i] << '\n';
            if(niz[i] % 2 == 0) ispis << niz[i] << '\n';
        }
        ispis.close();
        ispis.open("ispisbrojeva.txt", ios::in);
        int broj;
        while(ispis >> broj) cout << broj << '\n';
    }
    return 0;
}
/*
Napisati program koji pomoću klase „fstream“ i dva razlicita objekta kreira dvije datoteke. U jednu se vrši upis 5 brojeva a u 
drugu kao i na ekran izdvajaju parni brojevi.
*/