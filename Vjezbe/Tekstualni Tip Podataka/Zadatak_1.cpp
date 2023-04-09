#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    cin.ignore();
    char znak[n];

    cout << "Unesite recenicu do velicine " << n << "!\n";
    cin.getline(znak, n);

    char prvaTri[3], br(0);
    for(int i = 0; i < n; i++) {
        if(!isspace(znak[i])) {
            prvaTri[br] = znak[i];
            br++;
        }
        if(br == 3) break;
    }
    cout << "Prva tri znaka:\n";
    for(int i = 0; i < br; i++) {
        cout << prvaTri[i];
    }
    cout << endl << '\n';

    cout << "Znak ispod znaka:\n";
    for(int i = 0; i < n; i++) {
        if(!isspace(znak[i])) {
            cout << znak[i] << '\n';
        }
    }
    cout << endl;

    cout << "Rijec ispod rijeci:\n";
    for(int i = 0; i < n; i++) {
        cout << znak[i];
        if(isspace(znak[i])) cout << '\n';
    }
    cout << endl << '\n';

    int z1(0), z2(0), z3(0);
    for(int i = 0; i < n; i++) {
        if(isupper(znak[i])) z1++;
        if(islower(znak[i])) z2++;
        if(ispunct(znak[i])) z3++;
    }
    cout << "Broj velikih slova: " << z1 << '\n';
    cout << "Broj malih slova: " << z2 << '\n';
    cout << "Broj interpunkcija: " << z3 << '\n';
    cout << endl << '\n'; 

    string str = "";
    for(int i = 0; i < n; i++) {
        str += znak[i];
    }
    cout << "Podstring od 4. do 9. znaka:\n";
    cout << str.substr(4,9);
    cout << endl << '\n';

    int znak5 = (int)znak[4];
    cout << "Dvostruka vrijednost 5. znaka: " << znak5 * znak5;
    return 0;
}
/*
1.	Učitati niz znakova (char) pa ispisati:

-	Prva tri znaka stringa
-	Znak ispod znaka u učitanom stringu
-	Riječ ispod riječ
-	Broj velikih i malih slova, broj interpunkcija
-	Postring od 4 do 9 znaka
-	Konvertovan 5. znak u integer i izračunat dvostruku vrijednost
*/