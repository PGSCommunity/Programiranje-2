#include <iostream>
using namespace std;

int main() {
    int n;
    int br(0);
    cout << "Unesite broj:\n";
    cin >> n;

    do {
        br++;
        n /= 10;
    } while(n != 0);
    cout << "Broj cifara unesenog broja je: " << br;
    return 0;
}
/*
Napisati program koji prebrojava cifre unesenog broja
*/