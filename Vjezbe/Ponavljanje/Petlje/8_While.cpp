#include <iostream>
using namespace std;

int main() {
    int i(15), s(0);
    while(i >= 5) {
        if(i % 2 == 0) s += i;
        i--;
    } 
    cout << "Suma parnih brojeva iz intervala: " << s;
    return 0;
}
/*
Izračunati i ispisati sumu svih parnih brojeva iz intervala 15 - 5
*/