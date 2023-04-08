#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Velicina niza?\n";
    cin >> n;
    int a[n], b[n], br(0);
    cout << "Unesite clanove niza a!\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) {
            b[br] = a[i];
            br++;
        }
    }
    
    for(int i = 0; i < br; i++) {
        for(int j = 0; j < br - 1 - i; j++) {
            if(b[j] > b[j + 1]) {
                int temp = b[j + 1];    
                b[j + 1] = b[j];
                b[j] = temp;
            }
        }
    }

    cout << "Niz b:\n";
    for(int i = 0; i < br; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
/*
Napisati program koji omogucava unos niza a od velicine n. Zatim se formira niz b od parnih brojeva iz niza a, pa se
niz sortira u rastucem redoslijedu.
*/