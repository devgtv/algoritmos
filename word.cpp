#include <iostream>

#include <cctype>

using namespace std;


int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int contadorM = 0;
    int contadorm = 0;
    for(int i = 0 ; i < s.size();i++) {
    if(islower(s[i])) {
        contadorm++;
    }else {
        contadorM++;
    }
   }
    if(contadorm >= contadorM) {
        for(int i = 0 ; i < s.size();i++) {
             if(s[i]  >= 'A' && s[i] <= 'Z') {
                s[i] = tolower(s[i]);
             }
        }
    }  else {
        for(int i = 0 ; i < s.size();i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] = toupper(s[i]);
            }
        }
    }
    cout << s << '\n';
    return 0;
}