#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;

    int tempod = 240 - k;
    int tempg =  0;
    int probl = 0;

    for(int i = 1; i <= n;i++) {
        tempg += 5 * i;
        if(tempg > tempod) {
            break;
        }
        probl++;
    }
    cout << probl << endl;

    return 0;
}