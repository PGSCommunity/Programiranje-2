#include <iostream>
#include <cmath>
using namespace std;

struct kvadrat {
    float d;
};

int main() {
    kvadrat k[6];

    for(int i = 0; i < 6; i++) {
        cout << "Unesite dijagonalu " << i + 1 << ". dijagonale!\n";
        cin >> k[i].d;
        cout << "====================\n\n";
    }

    for(int i = 0; i < 6; i++) {
        float a = (k[i].d * sqrt(2)) / 2;
        cout << "Povrsina " << i + 1 << ". dijagonale:\n";
        cout << a * a << '\n';
        cout << "Obim " << i + 1 << ". dijagonale:\n";
        cout << 4 * a << '\n';
        cout << "====================\n\n";
    }
    return 0;
}
/*
Definirati strukturu ‚kvadrat' ( dijagonala kvadrata ), zatim napisati program koji za niz od šest kvadrata ispisuje površinu i 
obim za svaki, nakon učitane vrijednosti dijagonale.
*/