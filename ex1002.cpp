#include <iostream>
#include <iomanip>

using namespace std ;
#define n 3.14159
int main() {
 
double area,raio;
    cin >> raio;
 area = n * (raio * raio);
 cout << fixed << setprecision(4);
 cout << "A=" << area << "\n";
    return 0;
}

