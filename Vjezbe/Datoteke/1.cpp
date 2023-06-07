#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream proizvod("proizvod.txt");
    int m, n;
    cout << "Od broja?\n";
    cin >> m;
    cout << "Do broja?\n";
    cin >> n;

    if(!proizvod) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int p(1), br(0);
        for(int i = m; i <= n; i++) {
            if(i % 2 == 0) p *= i;
            br++;
        }
        proizvod << "Proizvod parnih brojeva u intervalu: " << p << '\n';
        proizvod << "Broj clanova niza: " << br << '\n';
        proizvod << "Clanovi niza u intervalu:\n";
        for(int i = m; i <= n; i++) {
            proizvod << i << " ";
        }
    }
    return 0;
}
/*
Izračunati proizvod x parnirnih brojeva niza iz raspona m - n. Kreirati datoteku „proizvod.txt" (ispisati poruku ukoliko je 
kreiranje datoteke neuspješno), pa u datoteku upisati broj članova niza, članove niza, interval m - n i traženi rezultat.
*/