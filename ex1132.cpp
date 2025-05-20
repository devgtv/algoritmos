#include <iostream>
using namespace std;
int main () {
    int x,y;
    cin >> x >> y;
    int inicio,fim;
    if (x < y) {
        inicio = x;
        fim = y;
    } else {
        inicio = y;
        fim = x;
    }
    int soma = 0;

    for (int i = inicio;i <=fim;i++) {
        if (i % 13 != 0){
            soma +=i;
        }
    }

    cout << soma << endl;

    return 0;
}