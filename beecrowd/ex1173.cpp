#include <iostream>
using namespace std;

int main() {

    int vetor[10];
    int v;

    cin >> v;
    for (int i = 0; i < 10; ++i) {
        if (i == 0) {
            vetor[i] = v;
        }
        else {
            vetor[i] = vetor[i - 1] * 2;
        }
    }

    for (int i = 0; i < 10; ++i) {
        cout  << "N[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}