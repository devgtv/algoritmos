#include <iostream>
#include <set>
#include <string>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string username;
    cin >> username;

    set<char> distinct;

    for(char c : username) {
        distinct.insert(c);
    }

    if (distinct.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }  else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}