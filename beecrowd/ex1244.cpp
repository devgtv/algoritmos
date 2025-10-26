#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

bool lambda(const string& a, const string& b) {
    if (a.length() > b.length()) {
        return true;   
    }
    else if (a.length() < b.length()) {
        return false;   
    }
    else {
        return false; 
    }
}
int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string linha;
        getline(cin, linha);

        istringstream ss(linha);
        vector<string> palavras;
        string palavra;

        while (ss >> palavra) {
            palavras.push_back(palavra);
        }

        stable_sort(palavras.begin(), palavras.end(),lambda);

        for (int i = 0; i < palavras.size(); i++) {
            if (i > 0) cout << " ";
            cout << palavras[i];
        }
        cout << endl;
    }
    return 0;
}