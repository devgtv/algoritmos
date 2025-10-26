#include <iostream>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;

    cin >> n >> s;
    int removals = 0;

    for (int i = 1; i < n;i++) {
        if (s[i] == s[i - 1]) {
            removals++;
        }
    }
    cout << removals << endl;


    return 0;
}