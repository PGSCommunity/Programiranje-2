#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a;
    cout << "Velicina niza?\n";
    cin >> n;
    int niz[n];
    cout << "Unesite elemente niza!\n";
    for(int i = 0; i < n; i++) {
        cin >> niz[i];
    }

    sort(niz, niz + n);

    cout << "Unesite broj a!\n";
    unos:cin >> a;
    if(a > niz[n-1]) {
        cout << "Broj ne moze biti veci od najveceg elementa niza!\n";
        goto unos;
    } 

    int poz(0);
    bool pronadjen(false);
    int l(0), d = n - 1;
    while(l <= d) {
        int s = (l + d) / 2;
        if(niz[s] == a) {
            poz = s;
            pronadjen = true;
            break;
        }
        else if(niz[s] < a) {
            l = s + 1;
        }
        else{
            d = s - 1;
        }
    }
    if(pronadjen) cout << "Element a se nalazi na poziciji: " << poz + 1 << '\n';
    else cout << "Element a nije u nizu!\n";

    float suma(0), br(0);
    for(int i = 0; i < n; i++) {
        if(niz[i] < a) {
            suma += niz[i];
            br++;
        }
    }
    if(br > 0) cout << "Aritmeticka sredina elemenata manjih od broja a: " << suma / br;
    else cout << "Nema elemenata manjih od broja a u nizu!";
    return 0;
}
/*
Napisati program koji pronalazi element a u učitanom nizu dimenzije n, elementi niza se nalaze u strogo rastućem 
poretku. Potom se računa aritmetička sredina elemenata manjih od broja a.(binarna pretraga)
*/