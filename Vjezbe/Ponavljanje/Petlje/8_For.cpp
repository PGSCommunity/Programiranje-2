#include <iostream>
using namespace std;

int main() {
    int s(0);
    for(int i = 15; i >= 5; i--) {
        if(i % 2 == 0) s += i;
    }
    cout << "Suma parnih brojeva iz intervala: " << s;
    return 0;
}
/*
Izračunati i ispisati sumu svih parnih brojeva iz intervala 15 - 5
*/