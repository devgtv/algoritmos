#include <iostream>
using namespace std;

int main() {
    int hinicial, minicial, hfinal, mfinal;


    cin >> hinicial >> minicial >> hfinal >> mfinal;

    int inicio = hinicial * 60 + minicial;
    int fim = hfinal * 60 + mfinal;


    if (fim <= inicio) {
        fim += 24 * 60;
    }


    int duracaominutos = fim - inicio;


    int duracaohoras = duracaominutos / 60;
    duracaominutos = duracaominutos % 60;


    cout << "O JOGO DUROU " << duracaohoras << " HORA(S) E " << duracaominutos << " MINUTO(S)" << endl;

    return 0;
}
