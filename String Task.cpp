#include <iostream>
#include <string>
#include <cctype>  
using namespace std;

bool IsVowel(char ch) {
    ch = tolower(ch);  
    return ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    cin >> input;

    string result;

    for (char c : input) {
        if (!IsVowel(c)) {
            result += '.';
            result += tolower(c);
        }
    }

    cout << result << '\n';

    return 0;
}
