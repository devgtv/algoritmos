#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int steps = x / 5;
    if (x % 5 != 0) {
        steps += 1;
    }

    cout << steps << '\n';

    return 0;
}
