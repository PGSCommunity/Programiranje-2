#include <iostream>
using namespace std;

struct krug {
    float r;
} k;

const float PI = 3.14;

krug unos() {
    cout << "Unesite poluprecnik kruga!\n";
    cin >> k.r;
    return k;
}

float ispisObima(krug k1) {
    return 2 * k1.r * PI;
}

float dvostruka(krug k1) {
    return 2 * (k1.r * k1.r * PI); 
}
 
int main() {
    krug k1 = unos();
    cout << "Obim kruga " << ispisObima(k1) << '\n';
    cout << "Dvostruka vrijednost povrsine kruga: " << dvostruka(k1);
    return 0;
}
/*
Definirati strukturu Krug. Zatim napisati funkciju koja omogućava unos vrijednosti parametara definiranih strukturom, 
funkciju koja vraća obim kruga te funkciju koja ispisuje dvostruku vrijednost površine kruga. 
*/