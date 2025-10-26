#include <iostream>
using namespace std;

int main (){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int c;
    cin >> c;

    while(c--) {
        int n;
        cin >> n;
        if(n%2 == 0) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;

}