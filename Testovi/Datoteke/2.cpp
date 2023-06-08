#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Unesite ime datoteke!\n";
    cin >> str;
    ofstream matrica(str.c_str());
    if(!matrica) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int n;
        cout << "Unesite broj n!\n";
        cin >> n;
        int mat[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << "Unesite matricu[" << i << "][" << j << "]:\n";
                cin >> mat[i][j];
            }
        }
        int p(1);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j) {
                    p *= mat[i][j];
                }
            }
        }
        matrica << "Proizvod elemenata na glavnoj dijagonali: " << p << '\n';
        matrica << "Elementi zadnje kolone u matrici:\n";
        for(int i = 0; i < n; i++) {
            matrica << mat[i][n - 1] << '\n';
        }
    }
    return 0;
}
/*
Napisati program koji za unesenu matricu dimenzije nxn u datoteku cije ime odreduje korisnik upisuje proizvod parnih elemenata na
glavnoj dijagolani i elemente posljednje kolone matrice.
*/