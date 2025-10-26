#include <iostream>
#include <cctype>  
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char s1[101], s2[101];
    cin >> s1 >> s2;
    for (int i = 0; s1[i] != '\0'; ++i) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if (c1 < c2) {
            cout << -1 << endl;
            return 0;
        } else if (c1 > c2) {
            cout << 1 << endl;
            return 0;
        }
       
    }
    cout << 0 << endl;
    return 0;
}
