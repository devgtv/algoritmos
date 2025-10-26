#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int c;
    cin >> c;

    while (c--) {
        string nome;
        int forca;
        cin >> nome >> forca;

        if (nome == "Thor") {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}
