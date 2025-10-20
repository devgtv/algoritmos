#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> bomba(n);
      for(int i = 0 ; i < n;i++){
        cin >> bomba[i];
    }
    int contador = 0;
    int contadorum = 0;
    int desgrama = 0;
    bool paratras = false;
    for(int i = 0 ; i <n;i++) {
        if(bomba[i] > 0 ) contador+= bomba[i]; 
        if(bomba[i] == -1) { 
            if(contador>=1) {
                contador--;
            } else{
                desgrama++;
            }
        }
           
     }
     cout << desgrama << endl;
    return 0;
}