#include <iostream>
using namespace std;

int main() {
    while (true) {
        int N;
        cin >> N;

        if (N == 0) {
            break; 
        }

        
        char comando;
        int posicao = 0; 

        
        for (int i = 0; i < N; i++) {
            cin >> comando; 

            if (comando == 'D') {
                posicao = (posicao + 1) % 4; 
            }
            else if (comando == 'E') {
                posicao = (posicao + 3) % 4; 
            }
        }

       
        if (posicao == 0) {
            cout << 'N' << endl; 
        }
        else if (posicao == 1) {
            cout << 'L' << endl; 
        }
        else if (posicao == 2) {
            cout << 'S' << endl; 
        }
        else {
            cout << 'O' << endl; 
        }
    }

    return 0;
}
