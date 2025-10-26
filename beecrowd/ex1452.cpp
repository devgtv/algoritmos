#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) {
            break;
        }

        vector<set<string>> servers(n);
        vector<set<string>> clients(m);

        for (int i = 0; i < n; i++) {
            int q;
            cin >> q;
            for (int j = 0; j < q; j++) { 
                string app;
                cin >> app;
                servers[i].insert(app);
            }
        }

        for (int i = 0; i < m; i++) {
            int p;
            cin >> p;
            for (int j = 0; j < p; j++) {
                string app;
                cin >> app;
                clients[i].insert(app);
            }
        }

        int totconectados = 0;

        for (int i = 0; i < m; i++) {
            set<int> conectados;
            for (int j = 0; j < n; j++) {
                for (const string& app : clients[i]) {
                    if (servers[j].count(app)) {
                        conectados.insert(j);
                        break;
                    }
                }
            }
            totconectados += conectados.size();
        }

        cout << totconectados << endl;
    }

    return 0;
}
