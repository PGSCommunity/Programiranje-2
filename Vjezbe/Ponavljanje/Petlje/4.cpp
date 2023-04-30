#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Unesite broj m i n\n";
    cin >> m >> n;

    int i(m), p(1);
    while(i <= n) {
        if(i % 2 == 0) p *= i;
        i++;
    }

    cout << "Proizvod parnih brojeva iz intervala: " << p;
    return 0;
}
/*
Napisati program koji računa proizvod parnih brojeva u intervalu m-n.
*/