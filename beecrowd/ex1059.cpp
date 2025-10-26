#include <iostream>
using namespace std;

void imprimirpares(int i) {
    if (i > 100) {
        return;
    }

    if (i % 2 == 0) {
        cout << i << endl;
    }

    imprimirpares(i + 1);
}

int main() {
    imprimirpares(1);
    return 0;
}
