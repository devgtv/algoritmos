#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x; 
    double consumo,y;
    cin >> x >> y;
    consumo = x / y;
    cout << fixed << setprecision(3) << consumo <<  " km/l" << endl;
        return 0;
}