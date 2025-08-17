#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
     cin.tie(nullptr);

    string s;
    cin >> s;

    vector<char> numbers;

    for(int i = 0; i < s.length();i++) {
        if(s[i] != '+') {
            numbers.push_back(s[i]);
        }
    }


    sort(numbers.begin(),numbers.end());

    for(int i = 0 ; i < numbers.size();i++) {
        cout << numbers[i];
        if(i != numbers.size() -1) {
            cout << "+";
        }
    }
    cout << endl;
    return 0;
}