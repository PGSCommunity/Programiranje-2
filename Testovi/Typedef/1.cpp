#include <iostream>
#include <cmath>
using namespace std;

typedef float varijabla;

int main() {
    varijabla w, z;
    float x(0);
    cout << "Unesite brojeve w i z!\n";
    cin >> w >> z;

    if(w > 2) x = (pow(z, 1/9)) / (abs(sin(z) - pow(w, 1/7)));
    if(z < -2) x = (sqrt(w + z)) / abs(w - z);

    cout << "Vrijednost x: " << x << '\n'; 
    return 0;
}
/*
Ucitati cijele brojeve w i z, te odrediti vrijednost sljedeceg izraza: 
                    9sqrt(z)
    za w > 2 =-------------------
              |sin(z) - 7sqrt(w)| 

               sqrt(w + z)
    za z < -2 =-----------
                 |w - z|

Varijable w i z su cjelobrojne korisnicki definirane (typedef) a x je realna varijabla.
*/