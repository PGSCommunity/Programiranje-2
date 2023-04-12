#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Unesite tekst!\n";
    getline(cin, str);

    int br(0);
    for(int i = 0; i < str.size(); i++) {
        if(isspace(str[i])) br++;
    }

    cout << "Broj rijeci u tekstu: " << br + 1;
    return 0;
}
/*
Napisati program koji nakon ucitanog stringa racuna koliko rijeci ima u tekstu.
*/