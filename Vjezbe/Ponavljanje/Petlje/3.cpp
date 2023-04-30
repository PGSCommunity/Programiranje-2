#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Unesite broj\n";
    cin >> n;

    int i(1), s(0);
    while(i <= n) {
        s += i;
        i += 2;
    } 

    cout << "Suma: " << s;
    return 0;
}
/*
Napisati program koji ispisuje sumu neparnih brojeva od 1 do n.
*/