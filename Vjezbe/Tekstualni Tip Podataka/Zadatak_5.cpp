#include <iostream>
#include <string>
using namespace std;

int main() {
    string time;
    cout << "Unesite vrijeme! (hh:ss):\n";
    getline(cin, time);
    
    int minute = stoi(time.substr(0,2));
    int sati = stoi(time.substr(3,5));
    
    cout << "Minuta proteklo od ponoci: " << (minute * 60) + sati;
    return 0;
}
/*
5.	String promjenjiva time čuva vrijeme u formatu „ss:mm“ gdje je ss – broj sati, a mm – broj minuta, npr. '17:45'. 
Napisati program koji na osnovu zadatog vremena time računaj koliko je minuta proteklo od ponoći.
*/