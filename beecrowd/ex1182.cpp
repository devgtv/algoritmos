#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int c;
    char t;

    cin >> c >> t;

    double m[12][12];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }

    double resultado = 0.0;

    for (int i = 0; i < 12; i++) {
        resultado += m[i][c];
    }

    if (t == 'S') {
        cout << fixed << setprecision(1) << resultado << endl;
    }
    else if (t == 'M') {
        cout << fixed << setprecision(1) << resultado / 12 << endl;
    }

    return 0;
}
