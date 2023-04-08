#include <iostream>
using namespace std;

int main() {
    int niz[50];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < 50; i++) {
        cin >> niz[i];
    }

    for(int i = 0; i < 50; i++) {
        for(int j = 0; j < 50 - 1 - i; j++) {
            if(niz[j] > niz[j + 1]) {
                int temp = niz[j + 1];
                niz[j + 1] = niz[j];
                niz[j] = temp;
            }
        }
    }
    
    cout << "Sortiran niz:\n";
    for(int i = 0; i < 50; i++) {
        cout << niz[i] << " ";
    }
    return 0;
}
/*
Napisati program koji sortira niz od 50 elemenata koristeci bubble sort.
*/