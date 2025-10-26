#include <iostream>
using namespace std;


int main () {

    int n;
    while(true) {
        cin >> n;
        if(n==0) {
            break;
        }
        int px = 0,py =0;
        for(int i = 0; i < n;i++) {
            int a,b;
            cin >> a >> b;
            if (a > b) {
                px++;
            } else if (b > a) {
                py++;
            }

        }
        cout << px << " " << py << endl;
    }
    return 0;
}