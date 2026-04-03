#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n;
    cin >> n;

    vector<int> h(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    vector<int> custo(n + 1);
    custo[1] = 0;
    custo[2] = abs(h[2] - h[1]);
    for (int i = 3; i <= n; i++) {
        custo[i] = min(
            custo[i - 1] + abs(h[i] - h[i - 1]),
            custo[i - 2] + abs(h[i] - h[i - 2])
        );
    }

    cout << custo[n] << endl;

    return 0;
}