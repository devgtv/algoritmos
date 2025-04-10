#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int numero, horas_trabalhadas;
    
    float salario, salario_por_hora;
    cin >> numero >> horas_trabalhadas >> salario_por_hora;
    
    salario = salario_por_hora * horas_trabalhadas;
    
    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;
    return 0;
}