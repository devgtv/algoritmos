#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool edist(int ano) {
    set<char> digitos;
    string strano = to_string(ano);
    for(char c : strano) {
        if(digitos.count(c)) {
            return false;
        }
        digitos.insert(c);
    }
    return true;
}  



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int ano;
    cin >> ano;
    while(true) {
        ano++;
        if(edist(ano)) {
            cout << ano << endl;
            break;
        }
    }
    return 0;
}
