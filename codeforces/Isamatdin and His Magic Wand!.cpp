    #include <bits/stdc++.h>
    #define int long long
    #define endl '\n'
     
    using namespace std;
     
    signed main () {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while(t-- ) {
        int n;
        cin  >> n;
        vector<int> vevet(n);
        int c1 = 0;
        int c2 = 0;
        for(int i = 0;i<n;i++) {
            cin >> vevet[i];
            if(vevet[i] % 2== 0) {
                c2++;
            } else {
                c1++;
            }
        }
        if(c1 == 0 || c2 == 0) {
            for(int i = 0 ; i < n;i++) {
                cout << vevet[i] << (i == n - 1 ? "" : " ");
            }
            cout << endl;
        } else {
            sort(vevet.begin(),vevet.end());
            for(int i = 0 ; i < n;i++) {
                cout << vevet[i] << (i== n -1 ? "" : " ");
            }
            cout << endl;
        }
       } 
        return 0;
    }