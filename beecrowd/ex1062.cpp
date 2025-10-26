#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  
    while (true) {
        int quantidadeVagoes;
        cin >> quantidadeVagoes;

        if (quantidadeVagoes == 0) break;

        while (true) {
            vector<int> desejado(quantidadeVagoes);
            cin >> desejado[0];

            if (desejado[0] == 0) {
                cout << endl;
                break;
            }

            for (int i = 1; i < quantidadeVagoes; ++i) {
                cin >> desejado[i];
            }

            stack<int> estacao;
            int proximoVagao = 1;
            bool temComo = true;

            for (int i = 0; i < quantidadeVagoes; ++i) {
                int vagaoDesejadop = desejado[i];

                while (proximoVagao <= quantidadeVagoes && (estacao.empty() || estacao.top() != vagaoDesejadop)) {
                    estacao.push(proximoVagao);
                    proximoVagao++;
                }

                if (estacao.top() == vagaoDesejadop) {
                    estacao.pop();
                }
                else {
                    temComo = false;
                    break;
                }
            }

            cout << (temComo ? "Yes" : "No") << endl;
        }
    }

    return 0;
}
