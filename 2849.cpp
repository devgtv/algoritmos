#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int soma = 0;
    int escolha = 0;
    for(int i = 0 ; i < n;i++) {
        cin >> escolha;
        if(escolha!= 1) {
            soma++;
        }
    }
    cout << soma << endl;
    return 0;
}