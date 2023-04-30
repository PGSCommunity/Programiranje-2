#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Unesite broj mjeseca\n";
    unos:cin >> a;
    
    switch(a) {
        case 1:
            cout << "Januar";
            break;
        case 2:
            cout << "Februar";
            break;
        case 3:
            cout << "Mart";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "Maj";
            break;
        case 6:
            cout << "Juni";
            break;
        case 7:
            cout << "Juli";
            break;
        case 8:
            cout << "Avgust";
            break;
        case 9:
            cout << "Septembar";
            break;
        case 10:
            cout << "Oktobar";
            break;
        case 11:
            cout << "Novembar";
            break;
        case 12:
            cout << "Decembar";
            break;
        default:
            cout << "Unesite broj izmedju 1-12!\n";
            goto unos;
    }
    return 0;
}
/*
Napisati program koji za uneseni redni broj mjeseca u godini ispisuje naziv tog mjeseca
*/