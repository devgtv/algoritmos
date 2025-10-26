#include <iostream>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int contador = 0;

    for(int i = 0 ; i < n;i++) {
        int p,v,t;
        cin >> p >> v >> t;

        if (p + v + t >= 2) {
            contador++;
        }
    }
    cout << contador << endl;
    return 0;
}