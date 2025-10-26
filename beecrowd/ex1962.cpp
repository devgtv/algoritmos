#include <iostream>
using namespace std;

int main() {
    int i, n, ano;

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> ano;
        if (ano > 2015) cout << ano - 2014 << " A.C" << endl;
        else if (ano < 2015) cout << 2015 - ano << " D.C" << endl;
        else cout << "1 A.C" << endl;


    }
    return 0;
}