#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int aw = 0;
    int dw = 0;
    for(char c : s) {
        if (c == 'A') aw++;
        else if (c == 'D')dw++;
    }

    if(aw > dw) {
        cout << "Anton\n";
    } else if (dw > aw) {
        cout << "Danik\n";
    } else {
        cout << "Friendship\n";
    }
    return 0;
}