#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> cartas(n);
    for(int i = 0; i < n; i++) {
        cin >> cartas[i];
    }

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool turnosereja = true;

    while(l <= r) {
        int escolhan;
        if(cartas[l] > cartas[r]) {
            escolhan = cartas[l];
            l++;
        } else {
            escolhan = cartas[r];
            r--;
        }

        if(turnosereja) {
            sereja += escolhan;
        } else {
            dima += escolhan;
        }

        turnosereja = !turnosereja; 
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
