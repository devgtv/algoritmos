#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  

    int num = 1; 

    for (int i = 0; i < N; i++) {
       
        for (int j = 0; j < 3; j++) {
            cout << num << " ";
            num++;
        }
        cout << "PUM" << endl;
        cont += 1;
    }

    return 0;
}
