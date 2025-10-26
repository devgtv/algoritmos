#include <iostream>
using namespace std;

int main() {

    int x;
    int soma = 0;

   
    for (int i = 1; i <= 9; i++) {
        cin >> x;
        soma += x;
    }


    int vencedor_index = (soma - 1) % 9;

  
    if (vencedor_index == 0) {
        cout << "Dasher" << endl;
    }
    else if (vencedor_index == 1) {
        cout << "Dancer" << endl;
    }
    else if (vencedor_index == 2) {
        cout << "Prancer" << endl;
    }
    else if (vencedor_index == 3) {
        cout << "Vixen" << endl;
    }
    else if (vencedor_index == 4) {
        cout << "Comet" << endl;
    }
    else if (vencedor_index == 5) {
        cout << "Cupid" << endl;
    }
    else if (vencedor_index == 6) {
        cout << "Donner" << endl;
    }
    else if (vencedor_index == 7) {
        cout << "Blitzen" << endl;
    }
    else if (vencedor_index == 8) {
        cout << "Rudolph" << endl;
    }

    return 0;
}
