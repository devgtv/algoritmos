#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char soun;
    double matriz[12][12];
    double soma = 0.0;
    int cont = 0;

    cin >> soun;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 12 - i - 1; j++) {
            soma += matriz[i][j];
            cont++;
        }
    }

    if (soun == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    }
    else if (soun == 'M') {
        cout << fixed << setprecision(1) << soma / cont << endl;
    }

    return 0;
}
