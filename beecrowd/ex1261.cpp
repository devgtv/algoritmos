#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    map<string, int> aopa;

    for (int i = 0; i < m; i++) {
        string palavra;
        int valor;
        cin >> palavra >> valor;
        aopa[palavra] = valor;
    }

    for (int i = 0; i < n; i++) {
        string palavra;
        int soma = 0;

        while (cin >> palavra && palavra != ".") {
                soma += aopa[palavra];
            }
        }

        cout << soma << endl;
    }

    return 0;
}
