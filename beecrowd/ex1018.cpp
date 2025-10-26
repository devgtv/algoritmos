#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << endl;

    int nota100 = n / 100;
    n = n % 100;
    int nota50 = n / 50;
    n = n % 50;
    int nota20 = n / 20;
    n = n % 20;
    int nota10 = n / 10;
    n = n % 10;
    int nota5 = n / 5;
    n = n % 5;
    int nota2 = n / 2;
    n = n % 2;
    int nota1 = n;

    cout << nota100 << " nota(s) de R$ 100,00" << endl;
    cout << nota50 << " nota(s) de R$ 50,00" << endl;
    cout << nota20 << " nota(s) de R$ 20,00" << endl; 
    cout << nota10 << " nota(s) de R$ 10,00" << endl;
    cout << nota5 << " nota(s) de R$ 5,00" << endl;
    cout << nota2 << " nota(s) de R$ 2,00" << endl;
    cout << nota1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
