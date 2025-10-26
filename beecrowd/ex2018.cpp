#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
struct Medalhas {
    int ouro = 0;
    int prata = 0;
    int bronze = 0;
};
map<string, Medalhas> quadro;

bool ordena(const string& a, const string& b) {
    if (quadro[a].ouro != quadro[b].ouro)
        return quadro[a].ouro > quadro[b].ouro;
    if (quadro[a].prata != quadro[b].prata)
        return quadro[a].prata > quadro[b].prata;
    if (quadro[a].bronze != quadro[b].bronze)
        return quadro[a].bronze > quadro[b].bronze;
    return a < b;
}
int main() {
    string linha;
    while (getline(cin, linha)) {
        string ouro, prata, bronze;
        getline(cin, ouro);
        getline(cin, prata);
        getline(cin, bronze);
        quadro[ouro].ouro++;
        quadro[prata].prata++;
        quadro[bronze].bronze++;
    }

    vector<string> paises;
    for (const auto& it : quadro) {
        paises.push_back(it.first);
    }

    sort(paises.begin(), paises.end(), ordena);

    cout << "Quadro de Medalhas" << endl;
    for (const auto& pais : paises) {
        cout << pais << " " << quadro[pais].ouro << " " << quadro[pais].prata << " "
            << quadro[pais].bronze << endl;
    }
    return 0;
}
