#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main () {
    string sexo;
    cin >> sexo;
    vector<char> a,b;
    for(int i = 0 ; i < sexo.size();i++) {
        if(sexo[i] == 'a' ||sexo[i] == 'e' ||sexo[i] == 'i' ||sexo[i] == 'o' ||sexo[i] == 'u' ){
            a.push_back(sexo[i]);
        }
    }
    b = a;
    reverse(b.begin(),b.end());
    for(int i = 0 ; i < a.size();i++) {
        if(b[i] != a[i]) {
            cout << "N" << endl;
            return 0;
        }
    }
    cout << "S" << endl;

    return 0;
}