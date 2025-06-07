#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    long long a,b;

    while (cin >> a >> b && (a!= 0 || b!=0)) {
        if (a == 0  && b == 0){
            break;
        }
        long long minc = 1e18;
        
        long long c1 = 3 * a - a - b;
        long long valores1[3] = {a,b,c1};
        sort(valores1,valores1+3);
        


    }

    return 0 ;
}