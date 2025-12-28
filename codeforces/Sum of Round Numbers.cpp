#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;


    
    while(t--) {
        int n;
        cin >> n;

        vector<int> resto;
        int p = 1;

        while(n > 0) {
            int digito = n % 10;
            if(digito != 0) {
                resto.push_back(digito * p);
            }
            n /= 10;
            p *= 10;
        }



        cout << resto.size() << "\n";
        for(int bomba : resto) {
            cout << bomba << " ";
        }
        cout << "\n";
    }

    return 0;
}
