#include <iostream>

using namespace std;

int niveldevelocidade(int maiorvelocidade) {
    if (maiorvelocidade < 10) {
        return 1;
    }
    else if (maiorvelocidade < 20) {
        return 2;
    }
    else {
        return 3;
    }
}

void processarlesmas(int lesmas) {
    int velocidades[500];
    for (int i = 0; i < lesmas; ++i) {
        cin >> velocidades[i];
    }

    int maiorvelocidade = 0;
    for (int i = 0; i < lesmas; ++i) {
        if (velocidades[i] > maiorvelocidade) {
            maiorvelocidade = velocidades[i];
        }
    }

    cout << niveldevelocidade(maiorvelocidade) << endl;
}

int main() {
    int lesmas;
    while (cin >> lesmas) {
        processarlesmas(lesmas);
    }

    return 0;
}
