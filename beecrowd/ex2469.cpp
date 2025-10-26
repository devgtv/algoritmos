#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> notas(N);

    for (int i = 0; i < N; i++) {
        cin >> notas[i];
    }


    int nota_maxima = 100;


    vector<int> frequencia(nota_maxima + 1, 0);


    for (int i = 0; i < N; i++) {
        frequencia[notas[i]]++;
    }


    int nota_mais_frequente = -1;
    int max_frequencia = 0;


    for (int i = 0; i <= nota_maxima; i++) {
        if (frequencia[i] > max_frequencia || (frequencia[i] == max_frequencia && i > nota_mais_frequente)) {
            max_frequencia = frequencia[i];
            nota_mais_frequente = i;
        }
    }


    cout << nota_mais_frequente << endl;

    return 0;
}
