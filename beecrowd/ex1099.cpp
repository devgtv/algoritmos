#include <iostream>
#include <algorithm>
using namespace std;

int soma_entrenumeros(int a, int b) {
    int soma = 0, troca;

    if (b > a) {
        swap(a, b);
    }

    for (int i = b + 1; i < a; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {
    int n, x, y;

    cin >> n;

    for (int j = 0; j < n; ++j) {
        cin >> x >> y;
        cout << soma_entrenumeros(x, y) << endl;
    }

    return 0;
}
