#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Unesite string!\n";
    getline(cin, str);
    char c;
    cout << "Unesite znak!\n";
    cin >> c;

    int br(0);
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == c) br++;
    }

    if(br > 0) cout << "Znak " << c << " se ponavlja " << br << " puta.";
    else cout << "Znak " << c << " nije u stringu!";
    return 0;
}
/*
Ucitiati niz znakova /STRING/ i znak. Ispisati koliko puta se upisani znak pojavljuje u upisanom stringu
*/