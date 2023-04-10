#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Unesite recenicu:\n";
    getline(cin, s);
    string str(s.length(), ' ');
    for(int i = 0; i < s.size(); i++) {
        str[i] = toupper(s[i]);
    }

    int brA(0), brO(0);
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'A') brA++;
        if(str[i] == 'O') brO++;
    }
    if(brA >= brO) cout << str << " nije pristojna recenica!\n";
    else cout << str << " je pristojna recenica!\n";
    return 0;
}
/*
6.	U nekoj zemlji X „pristojnim“ se smatraju rečenice u kojima broj slova A nije veći od broja slova O. Napisati program koji 
provjerava da li je rečenica „pristojna“. Npr. „DOBAR DAN“ je u zemlji X nepristojna, a „DOZVOLJENO KOKODAKANJE“ pristojna rečenica.
*/