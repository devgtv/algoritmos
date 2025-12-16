#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int n;
        if (scanf("%d", &n) != 1) {
            return 0;
        } 
        if (n == 0){
            break;
        } 

        long long xort = 0;
        static long long v[100000 + 5];

        for (int i = 0; i < n; i++) {
            scanf("%lld", &v[i]);
            xort ^= v[i];
        }

        long long dbit = xort & -xort;
        long long a = 0, b = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] & dbit) {
                a ^= v[i];
            }else {
                b ^= v[i];
            }
            
        }

        if (a > b) swap(a, b);
        printf("%lld %lld\n", a, b);
    }
    return 0;
}
