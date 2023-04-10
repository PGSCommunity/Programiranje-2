#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Unesite string!\n";
    getline(cin, str);

    cout << "Slovo a je nalazi na:\n";
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == 'a' || str[i] == 'A') {
            cout << i + 1 << ". mjestu\n";
        }
    }
    return 0;
}
/*
Ispisati redna mjesta pojavljivanja slova a u textu
*/