#include <iostream>
using namespace std;

long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main () {
    int n;
    cin >> n;
    cout << fatorial(n) << endl;
    return 0;
}