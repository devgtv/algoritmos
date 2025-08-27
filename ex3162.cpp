#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double CalcularDistancia(const vector<int>& a, const vector<int>& b) {
    int dx = a[0] - b[0];
    int dy = a[1] - b[1];
    int dz = a[2] - b[2];

    return sqrt(dx * dx + dy * dy + dz * dz);
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> naves(n, vector<int>(3));

    for (int i = 0; i < n; ++i) {
        cin >> naves[i][0] >> naves[i][1] >> naves[i][2];
    }

    for (int i = 0; i < n; ++i) {
        double MenorDistancia = 1e9; 

        for (int j = 0; j < n; ++j) {
            if (i == j) continue;

            double dist = CalcularDistancia(naves[i], naves[j]);
            if (dist < MenorDistancia) {
                MenorDistancia = dist;
            }
        }

        if (MenorDistancia <= 20.0) {
            cout << "A" << endl;
        } else if (MenorDistancia <= 50.0) {
            cout << "M" << endl;
        } else {
            cout << "B" << endl;
        }
    }

    return 0;
}
