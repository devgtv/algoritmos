#include <iostream>
using namespace std;
int main() {

    char  x;
    int n, m1, m2, v1, v2;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m1 >> x >> v2;
        cin >> m2 >> x >> v1;

        if (m1 + v1 == m2 + v2) {
            if (v1 == v2) {
                cout << "Penaltis" << endl;
            }
            else if (v1 > v2) {
                cout << "Time 1" << endl;
            }
            else cout << "Time 2" << endl;

        }

        else if (m1 + v1 > m2 + v2) {
            cout << "Time 1" << endl;4
        }
        else
            cout << "Time 2" << endl;

    }
    return 0;
}