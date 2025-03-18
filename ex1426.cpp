#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, i, j;
    int fe, topo, fd;

    cin >> n;

    while (n--) {
     
        int matriz[10][10];

        
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                matriz[i][j] = -1;
            }
        }

        for (i = 0; i <= 8; i += 2) {
            for (j = 0, k = 0; j <= (i / 2); j++, k += 2) {
                cin >> matriz[i][k];
            }
        }
       

    
        for (i = 0; i < 8; i += 2) {
            for (j = 0, k = 0; j <= (i / 2); j++, k += 2) {
                topo = matriz[i][k];
                fe = matriz[i + 2][k];
                fd = matriz[i + 2][k + 2];
                matriz[i + 2][k + 1] = ((topo - fe - fd) / 2);
                matriz[i + 1][k] = fe + matriz[i + 2][k + 1];
                matriz[i + 1][k + 1] = matriz[i + 2][k + 1] + fd;
            }
        }

    
        for (i = 0; i < 9; i++) {
            for (j = 0; j < i; j++) {
                cout << matriz[i][j] << " ";
            }
            cout << matriz[i][j] << endl;
        }
    }

    return 0;
}
