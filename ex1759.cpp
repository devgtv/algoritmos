#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Ho";
        if (i < n - 1) { // se nao for o ultimo 
            cout << " ";
        }
        else {
            cout << "!";
        }
    }

    cout << endl;
    return 0;
}
