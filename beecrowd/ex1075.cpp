#include <iostream>
using namespace std;

int main() {
   

    int n; 
    cin >> n;
    int cont = 0;

    while (cont < 10000) {
        if (cont % n == 2 ) {
            cout << cont << endl;
        }
        cont = cont + 1;
    }



    return 0;
}
