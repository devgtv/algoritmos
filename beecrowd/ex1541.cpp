#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C;

    while (true) {

        cin >> A >> B >> C;


        if (A == 0 || B == 0 || C == 0) {
            break;
        }


        int areaCasa = A * B;


        double areaTerreno = areaCasa / (C / 100.0);


        int ladoTerreno = static_cast<int>(sqrt(areaTerreno));


        cout << ladoTerreno << endl;
    }

    return 0;
}
