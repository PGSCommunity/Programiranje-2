#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream recenica("recenica.txt");
    if(!recenica) {
        cout << "Ulaz u datoteku nije uspjelo!\n";
    } else {
        string str;
        getline(recenica, str);
        for(int i = str.size() - 1; i >= 0; i--) cout << str[i];
    }
    return 0;
}
/*
Rečenicu iz ulazne datoteke napisati obrnuto u izlaznu datoteku
*/