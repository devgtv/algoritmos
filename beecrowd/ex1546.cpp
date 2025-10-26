#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    while (n--) {
        int k; 
        cin >> k;

        for (int i = 0; i < k; i++) {
            int tipo;
            cin >> tipo;

            switch (tipo) {
                case 1:
                    cout << "Rolien" << endl;
                    break;
                case 2:
                    cout << "Naej" << endl;
                    break;
                case 3:
                    cout << "Elehcim" << endl;
                    break;
                case 4:
                    cout << "Odranoel" << endl;
                    break;
            }
        }
    }
    return 0;
}
