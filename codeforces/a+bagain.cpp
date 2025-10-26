#include <iostream>
using namespace std;


int main () {
    int long long t;
    cin >> t;
    while(t--) {
        string primeiro;
        
        cin >> primeiro;

        int long long p = primeiro[0] - '0';
        int long long p2 = primeiro[1] - '0';
        int long long resp = p + p2;
        cout << resp <<endl;
        
    }

    return 0;
}  