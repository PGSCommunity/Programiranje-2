#include <iostream>
using namespace std;

int brojBrojeva(int k, int m, int a) {
    int br(0);
    for(int i = k; i <= m; i++) {
        if(i % 10 == a) br++;
    }
    return br;
}

int main() {
    int k, m, a;
    cout << "Unesite brojeve k i m:\n";
    cin >> k >> m;
    cout << "Unesite broj a:\n";
    cin >> a;

    cout << brojBrojeva(k, m, a);
    return 0;
}
/*
Napisati funkciju koja vraca broj brojava iz intervala k - m cija je cifra jedinice jednaka broju a 
*/