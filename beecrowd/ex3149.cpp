#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Relato {
    string horario;
    string nome;
    int ordem;
    int minutos_totais;
};

bool compara_r(const Relato& a, const Relato& b) {
    if (a.minutos_totais != b.minutos_totais) {
        return a.minutos_totais < b.minutos_totais;
    }
    else {
        return a.ordem < b.ordem;
    }
}

int converter(const string& horario) {
    int horas = stoi(horario.substr(0, 2));
    int minutos = stoi(horario.substr(3, 2));

    if (horas == 23) {
        return horas * 60 + minutos;
    }
    else {
        return 24 * 60 + minutos;
    }
}

int main() {
    int proximo, quantidade;
    cin >> proximo >> quantidade;

    vector<Relato> relatosv;

    for (int i = 0; i < quantidade; i++) {
        string horario, morador;
        cin >> horario >> morador;

        int minutos = converter(horario);
        bool valido = false;

        if (horario.substr(0, 2) == "23") {
            int ls = 23 * 60 + 59;
            int li = 23 * 60 + (60 - proximo);
            if (minutos >= li && minutos <= ls) {
                valido = true;
            }
        }
        else {
            int li = 24 * 60;
            int ls = 24 * 60 + proximo;
            if (minutos >= li && minutos <= ls) {
                valido = true;
            }
        }

        if (valido) {
            Relato r;
            r.horario = horario;
            r.nome = morador;
            r.ordem = i;
            r.minutos_totais = converter(horario);
            relatosv.push_back(r);
        }
    }

    sort(relatosv.begin(), relatosv.end(), compara_r);

    for (const auto& relato : relatosv) {
        cout << relato.nome << endl;
    }

    return 0;
}