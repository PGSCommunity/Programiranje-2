#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cout << "Unesite stranicu a!\n";
    cin >> a;

    if(a > 10) cout << "Povrsina: " << 6 * pow(a, 2);
    else cout << "Zapremina: " << abs(pow(a, 3));
    return 0;
}
/*
Napisati program koji omogućava unos parametara za proračun površine (zapremine) nekog geometriskoh tijela. Ukoliko su parametri 
veći od 10, program računa i ispisuje površinu zadanog tijela, u suprotnom računa i ispisuje apsolutnu vrijednost zapremine tijela.
*/
//Editor's note: Za ovaj zadatak je odabrana kocka.