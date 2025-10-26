#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--) {
        int ta;
        cin >> ta;
        int bomba[ta];
        for(int i = 0 ; i < ta;i++) {
            cin >> bomba[i];
        }
        int md = 0;
        for(int i = 0 ; i < ta;i++) {
            int s = 0;
            int soma = 0;
            for(int k = i; k < ta;k++) {
                soma = soma + bomba[k];
                int ff = k - i + 1;
                int media = soma / ff;
                if(media > md) {
                    md = media;
                }
            }
        }
        cout << md << "\n";
    }



    
    return 0;
}