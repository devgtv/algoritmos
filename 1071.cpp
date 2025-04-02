#include <iostream>
#include <cmath>

using namespace std;

int simpares(int x, int y) {
    if (x > y) {
        return 0;
    }
    if (x % 2 != 0) {
        return x + simpares(x + 1, y);
    }
    return simpares(x + 1, y);
}

int main() {
    int x, y;
    cin >> x >> y;

    if (x > y) {
        swap(x, y);
    }

    cout << simpares(x + 1, y - 1) << endl;

    return 0;
}
