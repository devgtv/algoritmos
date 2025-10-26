#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int qa,ac;
    cin >> qa >> ac;

    int lt = 0;

    for(int i = 0 ; i < qa ;i++) {
        int am;
        cin >> am;

        if(am > ac) {
            lt +=2;
        } else {
            lt +=1;
        }
    }
    cout << lt << '\n';
    return 0;
}
