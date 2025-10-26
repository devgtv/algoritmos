#include <iostream>
#include <string>

using namespace std;

int main() {
    string musica;

    while (true) {
        getline(cin, musica); // pega toda a linha que contem a composicao

        if (musica == "*") { // retira da estrutura de repeticao para nao imprimir nem um valor 
            break;
        }

        int soma = 0;
        int compasso_correto = 0;

        for (int i = 0; i < musica.size(); i++) {
            char c = musica[i];

            if (c == '/') {
                if (soma == 64) {
                    compasso_correto++;
                }
                soma = 0;
            }
            else {
                if (c == 'W') soma += 64;
                else if (c == 'H') soma += 32;
                else if (c == 'Q') soma += 16;
                else if (c == 'E') soma += 8;
                else if (c == 'S') soma += 4;
                else if (c == 'T') soma += 2;
                else if (c == 'X') soma += 1;
            }
        }

    cout << compasso_correto << endl;
    }

    return 0;
}
