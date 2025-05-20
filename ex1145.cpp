#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cin >> x >> y;
    
    int num = 1;
    
    for (int j = 0; num <= y; j++) {
        for (int i = 0; i < x && num <= y; i++) {
            cout << num;
            num++;
            
            if (i < x - 1 && num <= y)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
