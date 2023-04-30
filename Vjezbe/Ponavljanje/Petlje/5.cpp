#include <iostream>
using namespace std;

int main() {
    int k, n, a;
    cout << "Unesite broj k i n:\n";
    cin >> k >> n;
    cout << "Unesite broj a:\n";
    cin >> a;

    int i(k), s(0);
    do {
        if(i % a != 0) s += i;
        i++;
    } while(i <= n);

    cout << "Suma: " << s;
    return 0;
}
/*
Napisati program koji računa sumu prirodnih brojeva u intervalu od k do n koji nisu djeljivi sa a.
*/