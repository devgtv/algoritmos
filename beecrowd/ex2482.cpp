#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
	int n;
	cin >> n;
	cin.ignore();
	map<string,string> tradutor;

	for (int i = 0;i < n;i++) {
		string idioma, reverencia;
		getline(cin, idioma);
		getline(cin, reverencia);
		tradutor[idioma] = reverencia;
	}
	int m;
	cin >> m;
	cin.ignore();

	for (int i = 0;i < m;i++) {
		string nome, idioma;
		getline(cin, nome);
		getline(cin, idioma);
		cout << nome << endl;
		cout << tradutor[idioma] << endl;
		cout << endl;
	}
	return 0;
}