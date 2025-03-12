#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, caso = 0;
    cin >> n;

    while (n--) {
        string numero, base;
        cin >> numero >> base;

        auto baseParaDecimal = [](const string& str, int base) {
            unsigned resultado = 0;
            int potencia = 1;
            for (int i = str.length() - 1; i >= 0; --i, potencia *= base) {
                if (str[i] >= '0' && str[i] <= '9') {
                    resultado += (str[i] - '0') * potencia;
                }
                else {
                    resultado += (str[i] - 'a' + 10) * potencia;
                }
            }
            return resultado;
            };

        auto decimalParaBase = [](unsigned x, unsigned base) {
            string destino = "";
            while (x > 0) {
                destino += (x % base < 10 ? char(x % base + '0') : char(x % base - 10 + 'a'));
                x /= base;
            }
            reverse(destino.begin(), destino.end());
            return destino;
            };

        auto stringParaInt = [](const string& str) {
            unsigned resultado = 0;
            unsigned multiplicador = 1;
            for (int tamanho = str.length() - 1; tamanho >= 0; --tamanho, multiplicador *= 10) {
                resultado += (str[tamanho] - '0') * multiplicador;
            }
            return resultado;
            };

        if (base == "bin") {
            cout << "Case " << ++caso << ":\n";
            cout << baseParaDecimal(numero, 2) << " dec\n";
            cout << decimalParaBase(baseParaDecimal(numero, 2), 16) << " hex\n\n";
        }
        else if (base == "dec") {
            cout << "Case " << ++caso << ":\n";
            cout << decimalParaBase(stringParaInt(numero), 16) << " hex\n";
            cout << decimalParaBase(stringParaInt(numero), 2) << " bin\n\n";
        }
        else {
            cout << "Case " << ++caso << ":\n";
            cout << baseParaDecimal(numero, 16) << " dec\n";
            cout << decimalParaBase(baseParaDecimal(numero, 16), 2) << " bin\n\n";
        }
    }

    return 0;
}
