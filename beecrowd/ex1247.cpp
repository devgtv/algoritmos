#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int d;
    double vf, vg;
    
    while (cin >> d >> vf >> vg) {
        double hip = sqrt(d * d + (12 * 12));
        double tempofugitivo = 12.0 / vf;
        double tempoguarda = hip / vg;

        if (tempoguarda <= tempofugitivo) {
            cout << "S" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}
