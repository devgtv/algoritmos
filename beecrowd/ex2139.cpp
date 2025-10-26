#include <iostream>
using namespace std;

int main() {
    int mes, dia;

    while (cin >> mes >> dia) {
        int passou = dia;

     
        for (int i = 1; i < mes; i++) {
            if (i == 2) {  
                passou += 29;
            }
            else if (i == 4 || i == 6 || i == 9 || i == 11) {  
                passou += 30;
            }
            else {  
                passou += 31;
            }
        }

        
        int diasNatal = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 25;

        
        int farta = diasNatal - passou;

       
        if (mes == 12 && dia == 25) {
            cout << "E natal!" << endl;  
        }
        else if (mes == 12 && dia == 24) {
            cout << "E vespera de natal!" << endl;  
        }
        else if (farta > 1) {
            cout << "Faltam " << farta << " dias para o natal!" << endl;  
        }
        else if (farta == 1) {
            cout << "E vespera de natal!" << endl;  
        }
        else if (farta == 0) {
            cout << "E natal!" << endl;  
        }
        else {
            cout << "Ja passou!" << endl;  
        }
    }

    return 0;
}
