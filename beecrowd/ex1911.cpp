#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        map<string, string> originais;
        for (int i = 0; i < n; i++) {
            string nome, assinatura;
            cin >> nome >> assinatura;
            originais[nome] = assinatura;
        }

        int m;
        int falsas = 0;
        cin >> m;
      
        for (int i = 0; i < m; i++) {
            string nome, assinatura;
            cin >> nome >> assinatura;
            string original = originais[nome];
            int diferencas = 0;

            for (size_t j = 0; j < original.size() && j < assinatura.size(); j++) {
                if (original[j] != assinatura[j]) {
                    diferencas++;
                }
            }
           
            // os tamnhos tambem contam como diferenca.
            diferencas += abs((int)original.size() - (int)assinatura.size());

            if (diferencas > 1) {
                falsas++;
            }
        }

        cout << falsas << endl;
    }
    return 0;
}
