#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    std::string nome;
    std::cin >> nome;
    double salariofixo, vendas, total;
    cin >> salariofixo >> vendas;
    total = salariofixo + (15.0/100 * vendas);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << "\n";

    return 0;
}