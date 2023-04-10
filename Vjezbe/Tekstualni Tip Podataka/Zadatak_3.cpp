#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s;
    cout << "Unesite recenicu!\n";
    getline(cin, s1);
    cout << "Unesite rijec!\n";
    getline(cin, s2);

    int br(0);
    int pozicija = s1.find(s2);
    while(pozicija != string::npos) {
        br++;
        pozicija = s1.find(s2, pozicija + 1);
    }
    cout << "Broj pojavljivanja stringa s2 u s1:\n";
    cout << br;
    cout << endl << '\n';   

    int k;
    cout << "Unesite poziciju k!\n";
    cin >> k;
    int poz = s1.find(s2, k);
    if(poz != string::npos) {
        cout << "Pozicija pojavljivanja stringa s1 u stringu s2 od pozicija k: " << poz << '\n';
    }
    else {
        cout << "String s2 se ne pojavljuje u stringu s1 na poziciji k ili kasnije.\n";
    }
    cout << endl << '\n';

    cout << "Unesite string s!\n";
    cin.ignore();
    getline(cin, s);
    int pos = s1.find(s2);
    while(pos != string::npos) {
        s1.replace(pos, s2.length(), s);
        pos = s1.find(s2, pos + s.length());
    }
    cout << "String nakon zamjene: " << s1;
    return 0;
}
/*
3.	Napisati program kojim se određuje
-	Broj pojavljivanja stringa s2 u stringu s1
-	Poziciju prvog pojavljivanja stringa s2 u stringu s1 počevši od pozicije k
-	U datom stringu s zamjenjuje svako pojavljivanje stringa s2 stringom s1.
*/