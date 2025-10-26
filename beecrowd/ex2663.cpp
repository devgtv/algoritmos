#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int> notas(n);

    for(int i = 0; i < n; i++) {
        cin >> notas[i];
    }

    sort(notas.begin(), notas.end(), greater<int>());

    int corte = notas[k - 1];
    int classificados = k;

   
    for (int i = k; i < n; i++) {
        if (notas[i] == corte) {
            classificados++;
        } else {
            break; 
        }
    }

    cout << classificados << endl;
    return 0;
}
