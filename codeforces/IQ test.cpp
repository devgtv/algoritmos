#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int n;
    cin >> n;
    vector<int> numeros(n);

    for(int i = 0 ; i < n;i++) {
        cin >> numeros[i];
    }
    int pares = 0, impares = 0;

    for(int i = 0 ; i < n;i++) {
        if(numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    int resp =  -1;
    if(pares > impares) {
        for(int i = 0 ; i < n;i++) {
            if(numeros[i] % 2 !=0) {
                resp = i + 1;
                break;
            }
        }
    } else {
        for(int i = 0 ; i < n;i++) {
            if(numeros[i] % 2 == 0) {
                resp = i + 1;
                break;
            }
        }
    }

    cout << resp << endl;
    



    return 0;
}