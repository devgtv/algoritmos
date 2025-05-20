#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero;
    int maior = 0;
    int posicao = 0;
    for (int i = 1; i <= 100; i++) {
        cin >> numero;
        if (numero > maior) {
            maior = numero;
            posicao = i;

        }
    }
    cout << maior << endl;
    cout << posicao << endl;
    return 0;
}