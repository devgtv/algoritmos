#include <iostream>
using namespace std;

int main() {
    for (int i = 1, j = 7; i <= 9; i += 2, j = i + 6) {
        
        for (int k = 0; k < 3; ++k) {
            cout << "I=" << i << " J=" << j - k << endl;
        }
    }
    return 0;
}
