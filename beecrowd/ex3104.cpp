#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    int b;
    cin >> a >> b;
    int remainder = 0;
    for(char digit : a) {
        remainder = (remainder * 10 + (digit - '0')) % b;
    }
    cout << remainder << endl;
    return 0;
}