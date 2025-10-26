#include <iostream>
#include <cstring>

using namespace std;

int contarbits(char* s) {
    int count = 0;
    while (*s) {
        if (*s == '1') {
            count++;
        }
        s++;
    }
    return count;
}   

char adicionarbitextra(char* s) {
    int count = contarbits(s);
    int len = strlen(s);
    char bitextra;

    if (count % 2 == 0) {
        bitextra = '0';
    }
    else {
        bitextra = '1';
    }

    s[len] = bitextra;
    s[len + 1] = '\0';
    return bitextra;
}

int main() {
    char mensagem[101];
    cin >> mensagem;
    adicionarbitextra(mensagem);
    cout << mensagem << endl;
    return 0;
}
