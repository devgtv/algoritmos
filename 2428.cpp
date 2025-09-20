#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    if ((a1 * a4 == a2 * a3) || (a1 * a3 == a2 * a4) || (a1 * a2 == a3 * a4)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}