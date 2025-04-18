#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long total = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                for (int k = j + 1; k < n; k++) {
                    if (a[j] > a[k]) {
                        total++;
                    }
                }
            }
        }
    }

    cout << total << endl;
    return 0;
}
