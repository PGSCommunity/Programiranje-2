#include <iostream>
using namespace std;

int main() {
    int k, l;
    cout << "Unesite broj k i l\n";
    cin >> k >> l;

    int br(0);
    for(int i = k; i <= l; i++) {
        if(i % 2 == 0) br++;
    }
    
    cout << "Broj parnih brojeva u intervalu: " << br;
    return 0;
}
/*
Napisati program koji prebrojava parne brojeve iz intervala k-l!
*/