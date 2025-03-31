#include <iostream>
#include <string>
using namespace std;

void inverter(char* str) {
    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    int i = 0, j = n - 1;
    while (i < j) {
        swap(str[i], str[j]);
        i++;
        j--;
    }
}

int main() {
    string entrada;
    cin >> entrada;

    inverter(&entrada[0]);

    cout << entrada << endl;

    return 0;
}
