#include <iostream>
using namespace std;

struct Stol {
    float duzina;
    float sirina;
    float visina;
};

float povrsinaStola(Stol s[], int n) {
    float maximum(0);
    float p(0);
    for(int i = 0; i < n; i++) {
        p = s[i].duzina * s[i].sirina;
        if(maximum < p) {
            maximum = p;
        }
    }
    return maximum;
}

int main() {
    int n;
    cout << "Koliko stolova?\n";
    cin >> n;
    Stol s[n];

    for(int i = 0; i < n; i++) {
        cout << "Unesite duzinu " << i + 1 << ". stola!\n";
        cin >> s[i].duzina;
        cout << "Unesite sirinu " << i + 1 << ". stola!\n";
        cin >> s[i].sirina;
        cout << "Unesite visinu " << i + 1 << ". stola!\n";
        cin >> s[i].visina;
        cout << "====================\n\n";
    }

    cout << "Najveca pisacka povrsina iznosi: " << povrsinaStola(s, n) << "cm.\n";
    return 0;
}
/*
Definirati strukturu stol. Stol je određen sa svojom dužinom, širinom i visinom. Zatim napisati program koja za niz stolova
vraća onaj stol (njegovu površinu) koji imaj najveću pisaću površinu.
*/