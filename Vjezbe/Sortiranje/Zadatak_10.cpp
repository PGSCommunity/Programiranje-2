#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Unesite recenicu!\n";
    getline(cin, str);

    string rijec = "";
    for(int i = str.length() - 1; i >= 0; i--) {
        if(str[i] == ' ') {
            rijec = str.substr(i + 1);
            break;
        }
    }

    for(int i = 0; i < rijec.length(); i++) {
        for(int j = 0; j < rijec.length() - 1 - i; j++) {
            if(rijec[j] > rijec[j + 1]) {
                char temp = rijec[j + 1];
                rijec[j + 1] = rijec[j];
                rijec[j] = temp;
            }
        }
    }

    cout << "Zadnja rijec sortirana silazno:\n";
    for(int i = rijec.length() - 1; i >= 0; i--) {
        cout << rijec[i];
    }
    return 0;
}
/*
Posljednju rijec u ucitanoj recenici sortirati silazno
*/