#include <iostream>
#include <vector>
#include <string>
#include  <sstream>

using namespace std;
int main() {
    string x;
    getline(cin, x);
    istringstream primeiro(x);

    getline(cin, x);
    istringstream segundo(x);
    vector<string> correto;
    getline(cin, x);
    string y;
    string z;

    while (primeiro >> y) {

        if (x == y) {
            while (segundo >> z) {
                correto.push_back(z);
            }
        }
        correto.push_back(y);
    }
    while (segundo >> z) {
        correto.push_back(z);
    }

    for (int i = 0; i < correto.size() - 1; i++) {
        cout << correto[i] << " ";
    }
    cout << correto[correto.size() - 1];
    cout << endl;

    return 0;
}