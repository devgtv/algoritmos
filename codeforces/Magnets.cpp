    #include <bits/stdc++.h>
    #define int long long
    #define endl '\n'

    using namespace std;

    signed main () {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int q;
        cin >> q;
        string ot,oa;
        int g = 0;
        for(int i = 0 ; i < q;i++) {
            cin >> ot;
            if(i == 0 || ot != oa) {
                g++;
            }
            oa = ot;
        }
        cout << g << endl;
        return 0;
    }