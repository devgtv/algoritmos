#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {

	string s;
	cin >> s;
	list<char> lista;

	for (char c : s) {
		if (c == '(') {
			lista.push_back(c);
		}
		else if (c == ')') {
			if (!lista.empty()) {
				lista.pop_back();
			}
		}
	}
	
	int ta_faltando = lista.size();
	if (ta_faltando == 0) {
		cout << "Partiu RU!" << endl;
	}
	else {
		cout << "Ainda temos " << ta_faltando << " assunto(s) pendente(s)!" << endl;
	}

	return 0;
}