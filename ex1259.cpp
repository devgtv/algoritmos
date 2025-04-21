#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector <int> pares;
    vector <int> impares;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            pares.push_back(x);
        } else {
            impares.push_back(x);
        }
    }
    sort(pares.begin(),pares.end());
    sort(impares.begin(),impares.end(),greater<int>());

    for (int i = 0; i < pares.size();i++) {
        cout << pares[i] << endl;
    } 
    for (int i = 0; i < impares.size();i++) {
        cout << impares[i] << endl;
    }

    return 0;
}