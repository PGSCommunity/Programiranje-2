#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a;
    cout << "Unesite stranicu a:\n";
    cin >> a;

    int i(1), o(0), p(0);
    do {
        o = 3 * a;
        p = (a * sqrt(3)) / 4;
        cout << i << ". obim: " << o << '\n';
        cout << i << ". povrsina: " << p << "\n\n";
        i++;
    } while(i <= 5);
    return 0;
}
/*
Napisati program koji računa površinu i obim pet jednakostraničnih trouglova za unesenu stranicu
*/