#include <iostream>
#include <cmath>
using namespace std;

struct tacka {
    int x;
    int y;
} k;

tacka unosKoordinata() {
    cout << "Unesite koordinate x i y!\n";
    cin >> k.x >> k.y;
    return k;
}

tacka ispisKoordinata(tacka t1, tacka t2) {
    cout << "Udaljenost tacaka je: " << sqrt(pow(t2.x - t1.x, 2) + pow(t2.y - t1.y,2));
}

int main() {
    tacka t1 = unosKoordinata();
    tacka t2 = unosKoordinata();

    ispisKoordinata(t1, t2);
    return 0;
}
/*
Kreirati strukturu pod nazivom tacka sa atributima koordinatim tackama x i y kreirati funkciju za unos koorditana i ispis njihove
udaljenostis
*/