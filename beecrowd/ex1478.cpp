#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int valorNumerico = abs(i - j) + 1;
                if (j == 0) {
                    cout << setw(3) << valorNumerico;
                } else {
                    cout << " " << setw(3) << valorNumerico;
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
