#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int sa = 0,sb =0 ,sc = 0;
    for(int i = 0 ; i < n;i++) {
        int a,b,c;
        cin >> a >> b >> c;
        sa += a;
        sb += b;
        sc += c;
    } 
    cout << ( ( sa == 0 && sb == 0 && sc == 0) ? "YES\n" : "NO\n");
    return 0;
}