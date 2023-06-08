#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream nizbrojeva("NizBrojeva.txt");
    if(!nizbrojeva) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int broj;
        while(nizbrojeva >> broj) {
            if(broj < 0) {
                cout << broj << '\n';
            }
        }
        nizbrojeva.close();
        nizbrojeva.open("NizBrojeva.txt");
        while(nizbrojeva >> broj) {
            if(broj > 0) {
                cout << broj << '\n';
            }
        }
    }
    return 0;
}
/*
Napisati program koji brojeve datoteke „NizBrojeva.txt“ učitava u programski niz. Potom se iz niza prvo ispisuju negativni pa 
pozitivni brojevi.
*/