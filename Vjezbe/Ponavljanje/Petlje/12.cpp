#include <iostream>
using namespace std;

int main() {
    int s(0), br;
    for(int i = 1; i <= 10; i++) {
        cout << "Unesite " << i << ". broj!\n";
        cin >> br;
        s += br;
    }
    cout << "Suma unesenih brojeva: " << s;
    return 0;
}
/*
Napisati program za računanje sume cifara 10 učitanih prirodnih brojeva.
*/