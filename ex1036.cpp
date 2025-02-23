// formula de bhaskara

#include <iostream>
#include <cmath>
#include <iomanip>  

using namespace std;

int main() {
    double A, B, C, delta, R1, R2;

    cin >> A >> B >> C;

    if (A == 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    delta = B * B - 4 * A * C;

    if (delta < 0) {
        cout << "Impossivel calcular" << endl;
    }
    else {

        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);


        cout << fixed << setprecision(5);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }

    return 0;
}
