#include <iostream>
#include <set>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string linha;
        getline(cin, linha);
        set<string> itensunicos;

        istringstream iss(linha);
        string palavra;

        while (iss >> palavra) {
            itensunicos.insert(palavra);
        }

        bool primeiro = true;
        for (const auto& item : itensunicos) {
            if (!primeiro) cout << " ";
            cout << item;
            primeiro = false;
        }
        cout << endl;
    }

    return 0;
}
