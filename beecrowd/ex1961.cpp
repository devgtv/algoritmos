#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int p, n;
    cin >> p >> n;

    int cano_atual, cano_proximo;
    cin >> cano_atual; 

    for (int i = 1; i < n; i++) {
        cin >> cano_proximo; 

        if (abs(cano_atual - cano_proximo) > p) {
            cout << "GAME OVER" << endl;
            return 0;
        }

        cano_atual = cano_proximo; 
    }

    cout << "YOU WIN" << endl;

    return 0;
}
