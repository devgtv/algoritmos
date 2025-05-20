#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
int n;
cin >> n;

for (int i = 0 ; i<n;i++){
    int x,y;
    cin >> x >> y;
    if (y == 0) {
        cout << "divisao impossivel" << endl;
        
    } else {
        cout << fixed << setprecision(1) << (float) x/y << endl;
    }
}
 
    return 0;
}