#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int ncasos;
    cin >> ncasos;

    while (ncasos--) {
        int seqp;
        string seqprime;
        cin >> seqp >> seqprime;

        string seqord = seqprime;
        sort(seqord.begin(), seqord.end());

        vector<int> posidif;

        for (int indice = 0; indice < seqp; indice++) {
            if (seqprime[indice] != seqord[indice]) {
                posidif.push_back(indice);
            }
        }

        if (posidif.size() == 2) {
            swap(seqprime[posidif[0]], seqprime[posidif[1]]);
            if (seqprime == seqord) {
                cout << "There are the chance." << endl;
            }
            else {
                cout << "There aren't the chance." << endl;
            }
        }
        else {
            cout << "There aren't the chance." << endl;
        }
    }

    return 0;
}
