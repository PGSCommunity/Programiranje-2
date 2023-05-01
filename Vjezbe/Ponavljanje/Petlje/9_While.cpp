#include <iostream>
using namespace std;

int main() {
    int n, a, p(1);
    int i(1);
    cout << "Do broja?\n";
    cin >> n;
    cout << "Unesite broj a:\n";
    cin >> a;

    while(i <= n) {
        if(i % a != 0) p *= i;
        i++;
    }
    cout << "Proizvod brojeva koji nisu djeljivi sa " << a << " u intervalu: " << p;
    return 0;
}
/*
Izračunati proizvod prirodnih brojeva u interval 1-n koji nisu djeljivi brojem a.
*/