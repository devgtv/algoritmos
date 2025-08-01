#include <iostream>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int x = 0;
    for(int i = 0 ; i < n;i++) {
        string statements;
        cin >> statements;

        if (statements == "++X" || statements == "X++") {
            x++;
        } else if (statements == "--X" || statements == "X--") {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}