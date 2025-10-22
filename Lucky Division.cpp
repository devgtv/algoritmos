#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
// funcao para verrificar se todos os numeros sao compostos por 4 ou por 7

bool edquatrooude7 (const string n) {
      for(int i = 0 ; i < n.size();i++) {
        if(n[i] == '4' || n[i] == '7') {
        } else {
            
            return false;
        }
    }
    return true;
}
signed main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string n;
    cin >> n;

   bool eluck = edquatrooude7(n);


   if(eluck) {
    cout << "YES" << endl;
    return 0;
   }

 // se estamos aqui garantimos que o numero nao e luck entao ele pode
 // ser quaselck ou nao;
   int num = stoi(n);

   if (num % 4 == 0 || num % 7 == 0 || num % 47  == 0) {
    cout << "YES" << endl;
   } else {
    cout << "NO" << endl;
   }

    return 0;
}