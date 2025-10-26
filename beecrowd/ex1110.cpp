#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        queue<int> baralho_cheio;
        vector<int> descartadas;

        for (int i = 1; i <= n; i++) {
            baralho_cheio.push(i);
        }

        while (baralho_cheio.size() > 1) {
            descartadas.push_back(baralho_cheio.front());
            baralho_cheio.pop();
            baralho_cheio.push(baralho_cheio.front());
            baralho_cheio.pop();
        }

        cout << "Discarded cards: ";
        if (!descartadas.empty()) {
            for (int i = 0; i < descartadas.size(); i++) {
                if (i > 0) cout << ", ";
                cout << descartadas[i];
            }
        }
        cout << endl;

        cout << "Remaining card: " << baralho_cheio.front() << endl;
    }

    return 0;
}
