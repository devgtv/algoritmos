    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
     
    int mmc(int a, int b) {
        while (b) {
            int t = a % b;
            a = b;
            b = t;
        }
        return a;
    }
     
    set<int> fatoresdeprimos(int n) {
        set<int> primes;
        while (n % 2 == 0) {
            primes.insert(2);
            n /= 2;
        }
        for (int i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                primes.insert(i);
                n /= i;
            }
        }
        if (n > 1) primes.insert(n);
        return primes;
    }
     
    void desgraca() {
        int n;
        cin >> n;
        vector<int> vevet(n);
        for (int i = 0; i < n; i++) cin >> vevet[i];
     
        int g = vevet[0];
        for (int i = 1; i < n; i++) g = mmc(g, vevet[i]);
     
        set<int> pf = fatoresdeprimos(g);
     
        
        if (g == 1) {
            cout << 2 << "\n";
            return;
        }
     
        for (int x = 2; x <= 100; x++) { 
            bool ok = true;
            for (auto p : pf) {
                if (x % p == 0) { ok = false; break; }
            }
            if (ok) {
                cout << x << "\n";
                return;
            }
        }
     
        cout << -1 << "\n"; 
    }
     
    signed main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
     
        int t;
        cin >> t;
        while (t--) desgraca();
    }