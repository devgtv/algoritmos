#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int pb = 0;
    int cm = 0;
    while(n--) {
        int s,e;
        cin >> s >> e;
        pb -= s;
        pb += e;

        if(pb > cm) {
            cm = pb;
        }
    }
    cout << cm << endl;

    return 0;
}