#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int matricula = 0;
	float nota;
	
	int melhormatricula = -1;
	float maiornota = -1.0;




	for (int i = 0; i < n;i++) {
		cin >> matricula >> nota;
		if (nota > maiornota) {
			maiornota = nota;
			melhormatricula = matricula;

		}
	}

	if (maiornota >= 8.0) {
		cout << melhormatricula << endl;
	}
	else {
		cout << "Minimum note not reached" << endl;

	}

	return 0;
}