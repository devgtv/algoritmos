#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        stack<int> pilha;
        queue<int> fila;
        priority_queue<int> fila_prioridade;

        bool eh_pilha = true;
        bool eh_fila = true;
        bool eh_fila_prioridade = true;

        for (int i = 0; i < n; ++i) {
            int comando, valor;
            cin >> comando >> valor;

            if (comando == 1) {
                if (eh_pilha) pilha.push(valor);
                if (eh_fila) fila.push(valor);
                if (eh_fila_prioridade) fila_prioridade.push(valor);
            }
            else {
                if (eh_pilha) {
                    if (pilha.empty() || pilha.top() != valor) {
                        eh_pilha = false;
                    }
                    else {
                        pilha.pop();
                    }
                }

                if (eh_fila) {
                    if (fila.empty() || fila.front() != valor) {
                        eh_fila = false;
                    }
                    else {
                        fila.pop();
                    }
                }

                if (eh_fila_prioridade) {
                    if (fila_prioridade.empty() || fila_prioridade.top() != valor) {
                        eh_fila_prioridade = false;
                    }
                    else {
                        fila_prioridade.pop();
                    }
                }
            }
        }

        if (eh_pilha && !eh_fila && !eh_fila_prioridade) {
            cout << "stack" << endl;
        }
        else if (!eh_pilha && eh_fila && !eh_fila_prioridade) {
            cout << "queue" << endl;
        }
        else if (!eh_pilha && !eh_fila && eh_fila_prioridade) {
            cout << "priority queue" << endl;
        }
        else if (!eh_pilha && !eh_fila && !eh_fila_prioridade) {
            cout << "impossible" << endl;
        }
        else {
            cout << "not sure" << endl;
        }
    }

    return 0;
}
