#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Unesite tekst!\n";
    getline(cin, str);

    int br(0);
    for(int i = 0; i < str.size(); i++) {
        if(ispunct(str[i]) && str[i] != ',') br++;
    }

    cout << "Broj recenica u tekstu: " << br;
    return 0;
}
/*
Napisati program u kojem nakon unosa teksta (string), program racuna broj recenica u tekstu. (Recenica se podrazumijeva kao se 
zavrsava na . ? ili !).
*/