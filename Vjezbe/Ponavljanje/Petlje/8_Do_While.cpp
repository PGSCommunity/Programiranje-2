#include <iostream>
using namespace std;

int main() {
    int i(15), s(0);
    do {
        if(i % 2 == 0) s += i;
        i--;
    } while(i >= 5);
    cout << "Suma parnih brojeva iz intervala: " << s;
    return 0;
}
/*
Izračunati i ispisati sumu svih parnih brojeva iz intervala 15 - 5
*/