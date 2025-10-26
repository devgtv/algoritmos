#include <iostream>
#include <string>
using namespace std;

int main() {
    string mensagem_codificada;
    getline(cin, mensagem_codificada);

    string mensagem_decodificada = ""; 

    for (int i = 0; i < mensagem_codificada.length(); i++) {
        if (mensagem_codificada[i] == 'p' && i + 1 < mensagem_codificada.length()) {
           
            mensagem_decodificada += mensagem_codificada[i + 1]; 
            i++; 
        }
        else if (mensagem_codificada[i] != 'p') {
          
            mensagem_decodificada += mensagem_codificada[i];
        }
      }

    cout << mensagem_decodificada << endl; 

    return 0;
}
