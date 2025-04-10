#include <iostream>
#include <iomanip>
using namespace std;
#define pi 3.14159

int main() {

    double raio, volume;
    cin >> raio ;
    volume = (4.0 / 3.0) * pi * (raio * raio * raio);
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
         return 0;
}