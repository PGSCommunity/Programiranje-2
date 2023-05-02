#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Unesite dva broja:\n";
    cin >> x >> y;

    cout << "Zbir unesenih brojeva: " << suma(x, y);
    return 0;
}
/*
Napisati program koji sabira dva broja.
*/