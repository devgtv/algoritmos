#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int PA, PB;
        double G1, G2;
        cin >> PA >> PB >> G1 >> G2;

        int anos = 0;

        
        while (PA <= PB && anos <= 100) {
            PA += static_cast<int>(PA * (G1 / 100));
            PB += static_cast<int>(PB * (G2 / 100));
            anos++;
        }

        if (anos > 100) {
            cout << "Mais de 1 seculo." << endl;
        }
        else {
            cout << anos << " anos." << endl;
        }
    }

    return 0;
}
