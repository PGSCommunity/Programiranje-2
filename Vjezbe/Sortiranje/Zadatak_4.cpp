#include <iostream>
using namespace std;

void unos(int niz[], int n) {
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }
}

void bubble(int niz[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }
}

void ispis(int niz[], int n) {
    cout << "Sortiran niz:\n";
    for(int i = 0; i < n; i++) {
        cout << niz[i] << " ";
    }
}

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n];
    unos(niz, n);
    bubble(niz, n);
    ispis(niz, n);
    return 0;
}
/*
Napisati program koji pomocu funkcija sortira niz od n elemenata koristeci bubble sort.
*/