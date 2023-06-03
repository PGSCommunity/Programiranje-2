#include <iostream>
using namespace std;

struct vrijeme {
    int sec;
};

int main() {
    vrijeme v[2];

    for(int i = 0; i < 2; i++) {
        cout << "Unesite " << i + 1 << ". sekundu!\n";
        cin >> v[i].sec;
        cout << "===================\n\n";
    } 

    for(int i = 0; i < 2; i++) {
        int h = v[i].sec / 3600;
        int m = v[i].sec % 3600 / 60;
        cout << i + 1 << ". vrijeme u obliku hh/mm/sec:\n";
        cout << h << "/" << m << "/" << v[i].sec << '\n';
        cout << "====================\n\n";
    }
    return 0;
}
/*
Definirati strukturu ‚vrijeme' ( sec ), zatim napisati program koji sadrži niz dimenzije 2 za strukturni tip podatka 'vrijeme‘‚ 
a koji omogućava ispis vremena u obliku hh/mm/sec za uneseno vrijeme u sekundama.
*/