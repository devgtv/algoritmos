#include <iostream>
#include <algorithm>  
#include <iomanip>    

using namespace std;

int main() {
    int N;
    cin >> N;


    for (int i = 0; i < N; i++) {
        string nome;
        double grau_dificuldade;
        double nota1, nota2, nota3, nota4, nota5, nota6, nota7;

        cin >> nome;
        cin >> grau_dificuldade;
        cin >> nota1 >> nota2 >> nota3 >> nota4 >> nota5 >> nota6 >> nota7;


        double maior_nota = max({ nota1, nota2, nota3, nota4, nota5, nota6, nota7 });
        double menor_nota = min({ nota1, nota2, nota3, nota4, nota5, nota6, nota7 });


        double soma = 0;
        if (nota1 != maior_nota && nota1 != menor_nota) soma += nota1;
        if (nota2 != maior_nota && nota2 != menor_nota) soma += nota2;
        if (nota3 != maior_nota && nota3 != menor_nota) soma += nota3;
        if (nota4 != maior_nota && nota4 != menor_nota) soma += nota4;
        if (nota5 != maior_nota && nota5 != menor_nota) soma += nota5;
        if (nota6 != maior_nota && nota6 != menor_nota) soma += nota6;
        if (nota7 != maior_nota && nota7 != menor_nota) soma += nota7;


        double resultado = soma * grau_dificuldade;

        cout << fixed << setprecision(2) << nome << " " << resultado << endl;
    }

    return 0;
}
