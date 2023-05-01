#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float d;
    float a, p, o;
    int i(1);

    while(i <= 7) {
        cout << "Unesite " << i << ". dijagonalu!\n";
        cin >> d;
        a = (d * sqrt(2)) / 2;
        p = pow(a, 2);
        o = 4 * a;
        cout << i << ". povrsina: " << p << '\n';
        cout << i << ". obim: " << o << '\n';
        cout << "===================\n\n";
        i++;
    }
    return 0;
}
/*
Ispisati površine i obime za 7 različitih kvadrata na osnovu unesenih dijagonala
*/