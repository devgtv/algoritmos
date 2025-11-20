#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int reps = 0;
    reps += n / 100;
    n %= 100;

    reps += n / 20;
    n %= 20;

    reps += n / 10;
    n %= 10;

    reps += n / 5;
    n %= 5;

    reps += n / 1;
    n %= 1;

    cout << reps << endl;
    return 0;
}
