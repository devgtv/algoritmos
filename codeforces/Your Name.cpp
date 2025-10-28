#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
bool comparar (const string& a,const string& b) {
    map<char,int> fa;
    map<char,int> fb;

    for(char c: a) {
        fa[c]++;
    }

    for(char c : b) {
        fb[c]++;
    }

    if(fa == fb) {
        return true;
    } else {
        return false;
    }
}
signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while(q--) {
        int tamanho;
        cin >> tamanho;
        string a,b;
        cin >> a >> b;
        bool resp = comparar(a,b);
        if(resp){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}