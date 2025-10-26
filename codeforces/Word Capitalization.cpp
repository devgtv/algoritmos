#include <iostream>
#include <string>
#include <cctype>
using namespace std;    
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string word;
    cin >> word;

    if(!word.empty()) {
        word[0] = toupper(word[0]);
    }

    cout << word << endl;

    return 0;
}