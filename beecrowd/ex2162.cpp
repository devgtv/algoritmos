#include <iostream>

using namespace std;

int main() {
    int N, H, anterior;

    cin >> N;

    cin >> anterior;
    bool pico = false, vale = false, mesmoPadrao = true;
    int i = 1; 
    while (i < N) {  
        cin >> H;

        if (H > anterior && !pico) {
            pico = true;
            vale = false;
        }
        else if (H < anterior && !vale) {
            pico = false;
            vale = true;
        }
        else {
            mesmoPadrao = false;
            break;
        }

        anterior = H;
        i++; 
    }

    cout << (mesmoPadrao ? "1" : "0") << endl;

    return 0;
}
