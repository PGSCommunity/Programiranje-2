    #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        string str;
        cout << "Unesite string!\n";
        getline(cin, str);

        int tmax(0), br(0);
        for(int i = 0; i < str.size(); i++) {
            if(str[i] == 'A') {
                br++;
            }
            else {
                if(tmax < br) tmax = br;
                br = 0;
            }
        }
        if(br > tmax) tmax = 0;
        cout << "Najduza serija slova A ima " << tmax << " slova.";
        return 0;
    }
/*
Napisati program koji odredjuje duzinu najduze serije slova A u datom tekstu
*/