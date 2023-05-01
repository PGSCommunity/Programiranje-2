#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float d;
    float a(0), o(0), p(0);
    for(int i = 1; i <= 7; i++) {
        cout << "Unesite " << i << ". dijagonalu:\n";
        cin >> d;
        a = (d * sqrt(2)) / 2;
        p = pow(a, 2);
        o = 4 * a;
        cout << i << ". povrsina: " << p << '\n';
        cout << i << ". obim: " << o << '\n';
        cout << "====================\n\n"; 
    }
    return 0;
}
/*
Ispisati površine i obime za 7 različitih kvadrata na osnovu unesenih dijagonala
*/