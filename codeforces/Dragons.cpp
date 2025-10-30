#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int forca = 0;
    cin >> forca;
    int qdragons = 0;
    cin >> qdragons;
    vector<pair<int, int>> bomba(qdragons);

    for(int i = 0 ; i < qdragons;i++) {
        int a1;
        int a2;
        cin >> bomba[i].first >> bomba[i].second;
    }
    sort(bomba.begin(),bomba.end());
    for(int k = 0 ; k < qdragons;k++) {
        if(bomba[k].first >= forca) {
            cout <<"NO" << endl;
            return 0;
        } else {
            forca  += bomba[k].second;
        }
    }
    cout << "YES" << endl;
    return 0;
}