#include <iostream>
using namespace std;

int main() {
    float x, y, nota;
    float media;
    int cont = 0;

    while (cont < 2) {
        cin >> nota;

   
        if (nota >= 0 && nota <= 10) {
            if (cont == 0) {
                x = nota;  
                cont += 1;
            } else if (cont == 1) {
                y = nota;  
                cont += 1;
            }
        } else {
            cout << "nota invalida" << endl; 
        }
    }

    media = (x + y) / 2;  
    cout.precision(2);  
    cout << fixed << "media = " << media << endl;  // Imprime a média

    return 0;
}
