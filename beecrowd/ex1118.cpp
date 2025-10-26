#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int sim_ou_nao = 1;
    float nota1, nota2, media;

    while (sim_ou_nao == 1) {
        cin >> nota1;
        while (nota1 < 0 || nota1 > 10) {
            cout << "nota invalida" << endl;
            cin >> nota1;
        }

        cin >> nota2;
        while (nota2 < 0 || nota2 > 10) {
            cout << "nota invalida" << endl;
            cin >> nota2;
        }

        media = (nota1 + nota2) / 2;
        cout << fixed << setprecision(2);
        cout << "media = " << media << endl;

        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> sim_ou_nao;

        while (sim_ou_nao != 1 && sim_ou_nao != 2) {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> sim_ou_nao;
        }
    }

    return 0;
}
