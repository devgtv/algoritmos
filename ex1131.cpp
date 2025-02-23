#include <iostream>
using namespace std;

int main() {
    int gol_inter, gol_gremio;
    int cont_true = 0;
    int cont_grenais = 0;
    int vitoria_inter = 0, vitoria_gremio = 0, empates = 0;

    
    cin >> gol_inter;
    cin >> gol_gremio;

    cont_grenais = 1;

   
    if (gol_inter > gol_gremio) {
        vitoria_inter++;
    }
    if (gol_gremio > gol_inter) {
        vitoria_gremio++;
    }
    if (gol_inter == gol_gremio) {
        empates++;
    }

   
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> cont_true;

    
    while (cont_true == 1) {
        cin >> gol_inter;
        cin >> gol_gremio;
        cont_grenais++;

        
        if (gol_inter > gol_gremio) {
            vitoria_inter++;
        }
        if (gol_gremio > gol_inter) {
            vitoria_gremio++;
        }
        if (gol_inter == gol_gremio) {
            empates++;
        }


        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> cont_true;
    }

    
    cout << cont_grenais << " grenais" << endl;
    cout << "Inter:" << vitoria_inter << endl;
    cout << "Gremio:" << vitoria_gremio << endl;
    cout << "Empates:" << empates << endl;

    
    if (vitoria_inter > vitoria_gremio) {
        cout << "Inter venceu mais" << endl;
    }
    if (vitoria_gremio > vitoria_inter) {
        cout << "Gremio venceu mais" << endl;
    }
    if (vitoria_inter == vitoria_gremio) {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
