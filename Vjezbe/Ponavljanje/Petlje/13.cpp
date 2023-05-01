#include <iostream>
using namespace std;

int main() {
    int br1(0), br2(0);
    for(int i = 10; i <= 99; i++) {
        br1 = (i / 10) % 10;
        br2 = i % 10;
        if(br1 + br2 < 5) {
            cout << i << '\n';
        }
    }
    return 0;
}
/*
Ispisati sve dvocifrene brojeve čija je suma cifara manja od 5.
*/