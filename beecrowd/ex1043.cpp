#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float a, b, c, perimetro, trapezio;

    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        perimetro = a + b + c;
        cout << fixed << setprecision(1) << "Perimetro = " << perimetro << endl;

    }
    else {
        trapezio = ((a + b) * c) / 2;
        cout << fixed << setprecision(1) << "Area = " << trapezio << endl;
    }
    return 0;
}