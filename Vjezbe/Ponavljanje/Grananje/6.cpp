#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Unesite stranice a,b i c!\n";
    cin >> a >> b >> c;

    if(a == b && a == c && b == c) cout << "Trougao je istostranicni!";
    else if(a == b && c > a) cout << "Trougao je pravougli!";
    else cout << "Trougao je raznostranicni!";
    return 0;
}
/*
Učitati 3 realna pozitivna broja i ispitati da li postoji trougao čije su to stranice.
*/