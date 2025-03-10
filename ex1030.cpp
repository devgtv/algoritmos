#include <iostream>
using namespace std;

int main() {
    int nc, n, k;

    cin >> nc;

    for (int case_num = 1; case_num <= nc; ++case_num) {
        cin >> n >> k;

        int resultado = 0;
        for (int i = 2; i <= n; ++i) {
            resultado = (resultado + k) % i;
        }

        resultado = resultado + 1;

        cout << "Case " << case_num << ": " << resultado << endl;
    }

    return 0;
}
