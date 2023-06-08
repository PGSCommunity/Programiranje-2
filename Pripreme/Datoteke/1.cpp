#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream tekst("tekst.txt");
    ofstream slovoa("slovo_a.txt");

    if(!tekst || !slovoa) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        string str;
        getline(tekst, str);

        int br(0);
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == 'a') br++; 
        }

        slovoa << "Broj ponavljanja slova a iz datoteke: " << br;
    }
    return 0;
}
/*
Napisati program koji u izlaznu datoteku ispisuje broj pojavljivanja slova 'a' u tekstu koji je  učitan iz ulazne datoteke.
*/