#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    int notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas1, moedas50, moedas25, moedas10, moedas5, moedas1cent;
   
    int valor = n * 100;
    notas100 = valor / 10000;
    valor %= 10000;
    notas50 = valor / 5000;
    valor %= 5000;
    notas20 = valor / 2000;
    valor %= 2000;
    notas10 = valor / 1000;
    valor %= 1000;
    notas5 = valor / 500;
    valor %= 500;
    notas2 = valor / 200;
    valor %= 200;

    moedas1 = valor / 100;
    valor %= 100;
    moedas50 = valor / 50;
    valor %= 50;
    moedas25 = valor / 25;
    valor %= 25;
    moedas10 = valor / 10;
    valor %= 10;
    moedas5 = valor / 5;
    valor %= 5;
    moedas1cent = valor;
    valor %= 1;
    cout << "NOTAS:" << endl;
    cout << notas100 << " nota(s) de R$ 100.00" << endl;
    cout << notas50 << " nota(s) de R$ 50.00" << endl;
    cout << notas20 << " nota(s) de R$ 20.00" << endl;
    cout << notas10 << " nota(s) de R$ 10.00" << endl;
    cout << notas5 << " nota(s) de R$ 5.00" << endl;
    cout << notas2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << moedas1 << " moeda(s) de R$ 1.00" << endl;
    cout << moedas50 << " moeda(s) de R$ 0.50" << endl;
    cout << moedas25 << " moeda(s) de R$ 0.25" << endl;
    cout << moedas10 << " moeda(s) de R$ 0.10" << endl;
    cout << moedas5 << " moeda(s) de R$ 0.05" << endl;
    cout << moedas1cent << " moeda(s) de R$ 0.01" << endl;




    return 0;
}
