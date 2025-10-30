#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string,int> bomba;
    int n;
    cin >> n;

    for(int i = 0 ; i < n;i++) {
        string aux;
        cin >> aux;
        
        if(bomba.count(aux)) {
            cout << aux << bomba[aux] << endl;
        }else {
            cout << "OK" << endl;
        }
        bomba[aux]++;     
    }
    return 0;
}