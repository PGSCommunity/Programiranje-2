#include <iostream>
using namespace std;

int main() {
    int s(0);
    for(int i = 0; i <= 100; i += 2) {
        s += i;
    }
    cout << "Suma prvih 100 parnih brojeva: " << s;
    return 0;
}
/*
Izračunati sumu prvih 100 parnih prirodnih brojeva!
*/