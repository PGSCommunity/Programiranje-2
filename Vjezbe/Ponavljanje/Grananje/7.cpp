#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Unesite ocjenu\n";
    unos:cin >> a;

    switch(a) {
        case 1:
            cout << "Nedovoljan";
            break;
        case 2:
            cout << "Dovoljan";
            break;
        case 3:
            cout << "Dobar";
            break;
        case 4:
            cout << "Vrlodobar";
            break;
        case 5:
            cout << "Odlican";
            break;
        default:
            cout << "Unesite broj izmedju 1-5!\n";
            goto unos;
    }
    return 0;
}
/*
Napisati program za ispis uspjeha, prema slijedećoj tabeli:
1 - Nedovoljan
2 - Dovoljan
3 - Dobar
4 - Vrlodobar
5 - Odlican
*/