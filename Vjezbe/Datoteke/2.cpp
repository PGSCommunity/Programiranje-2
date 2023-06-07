#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream aritmeticka("aritmeticka.txt");
    if(!aritmeticka) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int niz1[7];
        float suma1(0);
        for(int i = 0; i < 7; i++) {
            aritmeticka >> niz1[i];
            suma1 += niz1[i];
        }
        cout << "Aritmeticka sredina brojeva iz datoteke: " << suma1 / 7 << '\n';
    }

    ifstream dvocifreni("dvocifreni.txt");
    if(!dvocifreni) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int niz2[10], suma2(0);
        for(int i = 0; i < 10; i++) {
            dvocifreni >> niz2[i];
            if(niz2[i] >= 10 && niz2[i] <= 99) suma2 += niz2[i];
        }
        cout << "Suma dvocifrenih brojeva iz datoteke: " << suma2;
    }
    return 0;
}
/*
Napisati program koji računa aritmetičku sredinu 7 parnih brojeva koji se nalaze u datoteci „aritmeticka.txt„.Koristeći 
promjenljivu izlaznog toka datoteke „aritmeticka.txt", iz datoteke „dvocifreni.txt" ( u kojoj se nalazi 10 različitih brojeva) 
program treba da izdvoji i ispiše sumu dvocifrenih brojeva. Za obje datoteke provjeriti eventualne razloge neispravnosti 
učitavanja vrijednosti.
*/