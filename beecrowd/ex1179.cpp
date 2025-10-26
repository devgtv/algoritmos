#include <iostream>
using namespace std;

int main() {
	int par[5], impar[5];
	int num, imparindex = 0, parindex = 0;
	for (int i = 0; i < 15; i++) {
		cin >> num;

		if (num % 2 == 0) {
			par[parindex++] = num;
			if (parindex == 5) {
				for (int j = 0; j < 5; j++) {
					cout << "par[" << j << "] = " << par[j] << endl;
				}
				parindex = 0;
			}
		} else{
			impar[imparindex++] = num;
			if (imparindex == 5) {
				for (int j = 0; j < 5; j++) {
					cout << "impar[" << j << "] = " << impar[j] << endl;
				}
				imparindex = 0;
			}
		}
	}
	for (int i = 0; i < imparindex; i++) {
		cout << "impar[" << i << "] = " << impar[i] << endl;
	}
	for (int i = 0; i < parindex; i++) {
		cout << "par[" << i << "] = " << par[i] << endl;
	}
	return 0;
}