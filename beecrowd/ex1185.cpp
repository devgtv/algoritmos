#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char soun;
    double matriz[12][12];
    double soma = 0.0;
    int contador = 0;

    cin >> soun;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            if (i < 11 - j) {
                soma += matriz[i][j];
                ++contador;
            }
        }
    }

    if (soun == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    }
    else if (soun == 'M') {
        cout << fixed << setprecision(1) << soma / contador << endl;
    }

    return 0;
}
