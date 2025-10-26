#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int B;
        cin >> B;


        int Ax, Dx, Lx;
        cin >> Ax >> Dx >> Lx;


        int Ay, Dy, Ly;
        cin >> Ay >> Dy >> Ly;


        double valor_golpex = (Ax + Dx) / 2.0;
        if (Lx % 2 == 0) {
            valor_golpex += B;
        }


        double valor_golpey = (Ay + Dy) / 2.0;
        if (Ly % 2 == 0) {
            valor_golpey += B;
        }


        if (valor_golpex > valor_golpey) {
            cout << "Dabriel" << endl;
        }
        else if (valor_golpex == valor_golpey) {
            cout << "Empate" << endl;
        }
        else {
            cout << "Guarte" << endl;
        }
    }

    return 0;
}
