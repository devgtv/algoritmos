#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    double x = 0.0;

    for (int i = 0; i < n; i++) {
        x += 6.0;
        x = 1.0 / x;
    }

    x += 3.0;


    cout << fixed << setprecision(10) << x << endl;

    return 0;
}
