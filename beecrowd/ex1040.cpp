#include <iostream>
#include <iomanip>  
#include <cmath>

using namespace std;

int main() {
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    int p1 = 2, p2 = 3, p3 = 4, p4 = 1;
    double media;

    media = (n1 * p1 + n2 * p2 + n3 * p3 + n4 * p4) / (p1 + p2 + p3 + p4);

    cout << fixed << setprecision(1) << "Media: " << media << endl;

    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    }
    else if (media >= 5.0 && media <= 6.9) {
        cout << "Aluno em exame." << endl;
        double nota_exame, nova_media;
        cin >> nota_exame;
        cout << "Nota do exame: " << nota_exame << endl;
        nova_media = (nota_exame + media) / 2;

        if (nova_media >= 5.0) {
            cout << "Aluno aprovado." << endl;
        }
        else if (nova_media < 5.0) {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << nova_media << endl;
    }

    return 0;
}
