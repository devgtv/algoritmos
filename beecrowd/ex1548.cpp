#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        vector <int> fila1(m);
        for (int i = 0; i < m; i++) {
            cin >> fila1[i];
        }

        vector <int> fila2 = fila1;
        sort(fila2.begin(), fila2.end(), greater<int>()); // ordenar comforme a ordem decrescente.

        int contador = 0;
        for (int i = 0; i < m; i++) {
            if (fila1[i] == fila2[i]) {
                contador++;
            }
        }
        cout << contador << endl;
    }

    return 0;
}
