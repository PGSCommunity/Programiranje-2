#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s;
    cout << "Unesite recenicu!\n";
    getline(cin, s);

    cout << "Svaka recenica u novom redu:\n";
    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
        if(ispunct(s[i]) && s[i] != ',') cout << endl;
    }
    return 0;
}
/*
4.	Napisati program koji svaku rečenicu iz ulaznog toka ispisuje u zasebnom redu. Pod rečenicom se podratumijeva niz znakova koji 
završava sa zanakovima '!', '?' ili '.'
*/