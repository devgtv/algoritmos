#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    vector<int> a(n);


    for(int i =0;i < n;i++) {
        cin >> a[i];
    }

    int valormaximo = *max_element(a.begin(),a.end());

    int soma = 0;

    for(int i = 0 ; i < n;i++) {
        soma += (valormaximo - a[i]);
    }

    cout << soma << endl;

    return 0;
}