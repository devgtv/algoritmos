#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int idade = 0, cont = 0;
    double soma = 0.0;
    double media = 0.0;

    for (cin >> idade; idade >= 0; cin >> idade) {
        soma = soma + idade;
        cont += 1;
    }

    media = soma / cont;
    cout << fixed << setprecision(2) << media << endl;
    return 0;
}
