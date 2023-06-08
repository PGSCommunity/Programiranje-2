#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream proracun("Proracun.txt");
    if(!proracun) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        int n, m;
        cout << "Od broja?\n";
        cin >> n;
        cout << "Do broja?\n";
        cin >> m;
        
        proracun << "Brojevi iz intervala " << n << " do " << m << ":\n";
        int suma(0), brojac(0); 
        for(int i = n; i <= m; i++) {
            proracun << i << '\n';
            if(i % 5 == 0) {
                suma += i;
                brojac++;
            }
        }
        proracun << "Aritmeticka sredina iz intervala djeljivih sa 5: " << suma / brojac;
    }
    return 0;
}
/*
Napisati program koji u datoteku „Proracun.txt“ upisuje brojeve n, m i aritmetičku sredinu brojeva iz intervala [n, m] djeljivih
sa 5. 
*/