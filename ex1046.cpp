#include <iostream>
using namespace std;

int main() {
    int hora, horafim;
    cin >> hora >> horafim;

    int duracao;
    if (hora < horafim) {
        duracao = horafim - hora;
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    }
    else {
        duracao = (24 - hora) + horafim;
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    }


    return 0;
}