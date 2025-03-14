#include <iostream>

using namespace std;

int main()
{ 
    char ponto, traco;
    int partes_cpf[4], digitos_cpf[11];

    while (cin >> partes_cpf[0] >> ponto >> partes_cpf[1] >> ponto >> partes_cpf[2] >> traco >> partes_cpf[3])
    {
        for (int i = 0; i < 11; ++i)
        {
            digitos_cpf[i] = 0;
        }

        
        for (int i = 0; i < 3; ++i)
        {
            int posicao = 2;

            while (partes_cpf[i])
            {
                digitos_cpf[3 * i + posicao] = partes_cpf[i] % 10;

                partes_cpf[i] /= 10;
                --posicao;
            }
        }

        
        digitos_cpf[9] = partes_cpf[3] / 10;
        digitos_cpf[10] = partes_cpf[3] % 10;

    
        int primeiro_verificador = 0;
        for (int i = 0; i < 9; ++i)
        {
            primeiro_verificador += (i + 1) * digitos_cpf[i];
        }
        primeiro_verificador  %= 11;
        if (primeiro_verificador == 10)
            primeiro_verificador = 0;

        if (primeiro_verificador == digitos_cpf[9])
        {
           
            int segundo_verificador = 0;
            for (int i = 0; i < 9; ++i)
            {
                segundo_verificador += (9 - i) * digitos_cpf[i];
            }
            segundo_verificador %= 11;
            if (segundo_verificador == 10)
                segundo_verificador = 0;

          
            if (segundo_verificador == digitos_cpf[10])
            if (segundo_verificador == digitos_cpf[10])
            {
                cout << "CPF valido" << endl;
            }
            else
            {
                cout << "CPF invalido" << endl;
            }
        }
        else
        {
            cout << "CPF invalido" << endl;
        }
    }

    return 0;
}