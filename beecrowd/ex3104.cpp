#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    string a;
    long long b;

    cin >> a >> b;

    long long remainder = 0;

    for (char digit : a) {
        
        remainder = (remainder * 10 + (digit - '0')) % b;
    }

    cout << remainder << endl;

    return 0;
}
