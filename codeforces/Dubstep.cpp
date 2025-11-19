#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string resultado;
  for (int i = 0; i < s.size();) {
    if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
      if (!resultado.empty() && resultado.back() != ' ')
        resultado += ' ';
      i += 3;
    } else {
      resultado += s[i];
      i++;
    }
  }
  if (!resultado.empty() && resultado.back() == ' ')
    resultado.pop_back();
  cout << resultado;
  return 0;
}