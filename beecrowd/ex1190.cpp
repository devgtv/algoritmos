#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double m[12][12], soma = 0, media = 0;
    char soun;
    int contador = 0;

    cin >> soun;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i < j && i > 12 - j - 1) {  
                soma += m[i][j];
                contador++;
            }
        }
    }

    if (soun == 'S') {
        cout << fixed << setprecision(1) << soma << endl;
    }
    else if (soun == 'M') {
        
        cout << fixed << setprecision(1) <<  soma / contador << endl;
    }

    return 0;
}
