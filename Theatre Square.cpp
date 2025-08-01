#include <iostream>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int n,m,a;
    cin >> n >> m >> a;

    long long int lajesHorizontal = (n + a - 1) / a;
    long long int lajezVertical = (m + a - 1) / a;

    cout << lajesHorizontal * lajezVertical << endl;




    return 0;
}